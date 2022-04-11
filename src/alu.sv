module alu #(
    parameter int WIDTH = 16
) (
    input op_flag_t opc,
    input logic [WIDTH - 1 : 0] x,
    input logic [WIDTH - 1 : 0] y,
    output logic [WIDTH - 1 : 0] out
);

  logic [WIDTH - 1 : 0] X;
  logic [WIDTH - 1 : 0] Y;

  unary_alu #(WIDTH) a0 (
      .z  (opc.zx),
      .n  (opc.nx),
      .x  (x),
      .out(X)
  );

  unary_alu #(WIDTH) a1 (
      .z  (opc.zy),
      .n  (opc.ny),
      .x  (y),
      .out(Y)
  );

  always_comb
    case ({
      opc.f, opc.no
    })
      2'b00:   out = X & Y;
      2'b01:   out = ~(X & Y);
      2'b10:   out = X + Y;
      2'b11:   out = ~(X + Y);
      default: out = X & Y;
    endcase
endmodule
