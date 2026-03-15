import re
import os

def update_lut():
    coeffs_file = 'hex_coeffs.txt'
    lut_file = '../rtl-model/lut.vs'

    if not os.path.exists(coeffs_file):
        print(f"Błąd: Nie znaleziono pliku {coeffs_file}")
        return
    if not os.path.exists(lut_file):
        print(f"Błąd: Nie znaleziono pliku {lut_file}")
        return

    coeffs = {}
    with open(coeffs_file, 'r') as f:
        for line in f:
            parts = line.split()
            if len(parts) >= 4 and parts[0].isdigit():
                idx = int(parts[0])
                a_hex = f"a_t'($signed(32'h{parts[1][2:]}) >>> (28-A_F))"
                b_hex = f"b_t'($signed(32'h{parts[2][2:]}) >>> (28-B_F))"
                c_hex = f"c_t'($signed(32'h{parts[3][2:]}) >>> (28-C_F))"
                coeffs[idx] = {'a': a_hex, 'b': b_hex, 'c': c_hex}

    print(f"Wczytano {len(coeffs)} wierszy z {coeffs_file}.")

    with open(lut_file, 'r') as f:
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
                hex_val = coeffs[idx][var_name]
                new_line = f"{prefix}{var_name}{eq_sign}{hex_val}{suffix}\n"
                new_lines.append(new_line)
                replaced_count += 1
            else:
                new_lines.append(line)
        else:
            new_lines.append(line)

    with open(lut_file, 'w') as f:
        f.writelines(new_lines)

    print(f"Sukces! Zmodyfikowano {replaced_count} przypisań w pliku {lut_file}.")

if __name__ == '__main__':
    update_lut()