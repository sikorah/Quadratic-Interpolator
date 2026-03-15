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

    always_comb begin
        t0 = t0_t'($signed(a));
        t1 = t1_t'($signed(b) * $signed({1'b0, x2}));
        t2 = t2_t'($signed(c) * $signed({1'b0, sq}));
    end
    
    logic signed [Y_W-1:0] a_aligned, t1_aligned, t2_aligned;

    always_comb begin
        a_aligned  = Y_W'(a); 
        t1_aligned = Y_W'($signed(t1 >>> ((B_F + X_F) - Y_F))); 
        t2_aligned = Y_W'($signed(t2 >>> ((C_F + (X_F * 2)) - Y_F)));

        y = t1_aligned + t2_aligned + a_aligned;
    end

endmodule
