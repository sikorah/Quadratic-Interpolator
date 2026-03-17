`include "quadra.vh"

module quadra
(   
    input x2_t  x2,
    input a_t   a,
    input b_t   b,
    input c_t   c,
    input sq_t  sq,
    output y_t  y
);
    t0_t t0;
    t1_t t1;
    t2_t t2;

    s_t sum_s;
    s_t sum_s_rounded;

    always_comb begin
        t0 = t0_t'(a);
        t1 = t1_t'((b) * `sh({1'b0, x2}));
        t2 = t2_t'((c) * `sh({1'b0, sq}));

        sum_s =
            (s_t'(t0) <<< (S_F - A_F)) +
            (s_t'(t1 >>> ((B_F + X_F) - S_F))) +
            (s_t'(t2 >>> ((C_F + (X_F * 2)) - S_F)));

        sum_s_rounded = sum_s + s_t'(1 << (R_F - 1));
        y = y_t'(sum_s_rounded >>> R_F);
    end

endmodule
