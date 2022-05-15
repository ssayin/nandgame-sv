// verilator lint_off UNOPTFLAT
module regst #(
    parameter int WIDTH = 16
) (
    input logic clk,
    input logic st,
    input logic [WIDTH - 1:0] d,
    output logic [WIDTH - 1:0] out
);

  genvar i;
  generate
    for (i = 0; i < WIDTH; i = i + 1) begin : gen_register_ff
      flipflop ff0 (
          .clk(clk),
          .st (st),
          .d  (d[i]),
          .out(out[i])
      );
    end
  endgenerate

endmodule
