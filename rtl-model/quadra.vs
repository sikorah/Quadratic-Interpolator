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

    s_t sum_wide;
    s_t sum_q23_floor;

    logic sum_has_fraction;
    logic rnd_guard;
    logic rnd_sticky;
    logic rnd_lsb;
    logic rnd_inc;

    always_comb begin
        t0 = t0_t'(a);                     // t0 = a_fxd
        t1 = t1_t'((b) * `sh({1'b0, x2})); // t1 = b_fxd * x2_fxd
        t2 = t2_t'((c) * `sh({1'b0, sq})); // t2 = c_fxd * sq_fxd

        sum_wide =
            (s_t'(t0) <<< (S_F - A_F)) +
            (s_t'(t1 >>> ((B_F + X_F) - S_F))) +
            (s_t'(t2 >>> ((C_F + (X_F * 2)) - S_F)));

        sum_q23_floor      = sum_wide >>> R_F;
        sum_has_fraction = |sum_wide[R_F-1:0];
        rnd_guard     = sum_wide[R_F-1];
        rnd_sticky    = |sum_wide[R_F-2:0];
        rnd_lsb       = sum_q23_floor[0];
        rnd_inc       = rnd_guard & (rnd_sticky | rnd_lsb);

        if (sum_wide[S_W-1] && sum_has_fraction)
            y = y_t'(sum_q23_floor + s_t'(1) + s_t'(rnd_inc));
        else
            y = y_t'(sum_q23_floor + s_t'(rnd_inc));
    end

endmodule
