module ram #(
    parameter int DATA_WIDTH = 8,
    parameter int ADDR_WIDTH = 6
) (
    input logic clk,
    input logic [(ADDR_WIDTH-1):0] addr,
    input logic st,
    input logic [(DATA_WIDTH-1):0] x,
    output logic [(DATA_WIDTH-1):0] out
);

  logic [DATA_WIDTH-1:0] ram[2**ADDR_WIDTH]  /*verilator public_flat_rw*/;
  always @(negedge clk) begin
    if (st) ram[addr] <= x;
  end
  always @(posedge clk) out <= ram[addr];

endmodule
