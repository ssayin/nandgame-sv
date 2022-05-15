module unary_alu #(
    parameter int WIDTH = 16
) (
    input logic z,
    input logic n,
    input logic [WIDTH - 1:0] x,
    output logic [WIDTH - 1:0] out
);

  always_comb
    case ({
      z, n
    })
      2'b00:   out = x;
      2'b01:   out = ~x;
      2'b10:   out = 0;
      2'b11:   out = ~0;
      default: out = x;
    endcase

endmodule
