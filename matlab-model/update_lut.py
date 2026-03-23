import os
import re
from decimal import Decimal, ROUND_HALF_EVEN


def to_signed_hex32(value: Decimal, frac_bits: int = 28, word_bits: int = 32) -> str:
    if frac_bits >= word_bits:
        raise ValueError(
            f"frac_bits ({frac_bits}) musi być mniejsze niż word_bits ({word_bits})"
        )
 
    scale = Decimal(1 << frac_bits)
    q = int((value * scale).to_integral_value(rounding=ROUND_HALF_EVEN))
 
    q_min = -(1 << (word_bits - 1))
    q_max =  (1 << (word_bits - 1)) - 1
    if not (q_min <= q <= q_max):
        raise ValueError(
            f"Współczynnik poza zakresem int{word_bits} po kwantyzacji: {value} → {q}"
        )
 
    hex_digits = word_bits // 4
    return f"{(q & ((1 << word_bits) - 1)):0{hex_digits}x}"


def load_coeffs_from_cpp_table(coeffs_path: str):
    """Read CoeffTable.hpp rows: { idx, a, b, c }, and return dict[idx] = {'a','b','c'}."""
    row_re = re.compile(
        r"\{\s*(\d+)\s*,\s*([-+]?\d+(?:\.\d+)?)\s*,\s*([-+]?\d+(?:\.\d+)?)\s*,\s*([-+]?\d+(?:\.\d+)?)\s*\}"
    )

    coeffs = {}
    with open(coeffs_path, "r", encoding="utf-8") as f:
        for line in f:
            m = row_re.search(line)
            if not m:
                continue

            idx = int(m.group(1))
            a = Decimal(m.group(2))
            b = Decimal(m.group(3))
            c = Decimal(m.group(4))

            coeffs[idx] = {
                "a": f"(32'sh{to_signed_hex32(a)}) >>> (28-A_F)",
                "b": f"(32'sh{to_signed_hex32(b)}) >>> (28-B_F)",
                "c": f"(32'sh{to_signed_hex32(c)}) >>> (28-C_F)",
            }

    return coeffs


def update_lut():
    script_dir = os.path.dirname(os.path.abspath(__file__))
    coeffs_file = os.path.normpath(os.path.join(script_dir, "../c++-model/CoeffTable.hpp"))
    lut_file = os.path.normpath(os.path.join(script_dir, "../rtl-model/lut.vs"))

    if not os.path.exists(coeffs_file):
        print(f"Błąd: Nie znaleziono pliku {coeffs_file}")
        return
    if not os.path.exists(lut_file):
        print(f"Błąd: Nie znaleziono pliku {lut_file}")
        return

    coeffs = load_coeffs_from_cpp_table(coeffs_file)
    print(f"Wczytano {len(coeffs)} wierszy z {coeffs_file}.")

    with open(lut_file, "r", encoding="utf-8") as f:
        lines = f.readlines()

    pattern = re.compile(r"^(\s*7'b([01]{7})\s*:\s*)([abc])(\s*=\s*)(.*?)(;.*)$")

    new_lines = []
    replaced_count = 0

    for line in lines:
        match = pattern.match(line)
        if match:
            prefix = match.group(1)
            bin_idx = match.group(2)
            var_name = match.group(3)
            eq_sign = match.group(4)
            suffix = match.group(6)

            idx = int(bin_idx, 2)

            if idx in coeffs:
                val = coeffs[idx][var_name]
                new_line = f"{prefix}{var_name}{eq_sign}{val}{suffix}\n"
                new_lines.append(new_line)
                replaced_count += 1
            else:
                new_lines.append(line)
        else:
            new_lines.append(line)

    with open(lut_file, "w", encoding="utf-8") as f:
        f.writelines(new_lines)

    print(f"Sukces! Zmodyfikowano {replaced_count} przypisań w pliku {lut_file}.")


if __name__ == "__main__":
    update_lut()