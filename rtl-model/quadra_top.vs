`include "quadra.vh"

module quadra_top
(
    input  ck_t clk,
    input  rs_t rst_b,
    input  x_t  x,
    input  dv_t x_dv,
    output y_t  y,
    output dv_t y_dv
);
    // Pipeline data valid (3 stages):
    dv_t dv_p0, dv_p1, dv_p2;

    a_t a;
    b_t b;
    c_t c;
    x1_t x1;
    x2_t x2;
    sq_t sq;
    y_t y_quadra;

    always_ff @(posedge clk)
    if (!rst_b) begin
        dv_p0 <= '0;
        dv_p1 <= '0;
        dv_p2 <= '0;
    end
    else begin
        dv_p0 <= x_dv;
        dv_p1 <= dv_p0;
        dv_p2 <= dv_p1;
    end

    assign x1 = x[23:17];
    assign x2 = x[16:0];

    lut u_lut(
        .x1(x1),
        .a(a),
        .b(b),
        .c(c)
    );

    square u_square(
        .x2(x2),
        .sq(sq)
    );

    quadra u_quadra(
        .a(a),
        .b(b),
        .c(c),
        .sq(sq),
        .x2(x2),
        .y(y_quadra)
    );

    // Outputs:
    always_comb y_dv = dv_p2;
    always_comb y = y_quadra;

endmodule
