// verilator lint_off UNOPTFLAT
module combined_memory #(
    parameter int WIDTH = 16,
    parameter int ADDR_WIDTH = 16
) (
    input logic clk,
    input dst_flag_t dst,
    input logic [WIDTH - 1:0] x,
    output logic [WIDTH - 1:0] A,
    output logic [WIDTH - 1:0] D,
    output logic [WIDTH - 1:0] A_star
);

  logic [WIDTH - 1 : 0] r_addr_out;
  logic [WIDTH - 1 : 0] r_data_out;
  logic [WIDTH - 1 : 0] ram_out;

  regst #(WIDTH) r_addr (
      .clk(clk),
      .st (dst.a),
      .d  (x),
      .out(r_addr_out)
  );


  regst #(WIDTH) r_data (
      .clk(clk),
      .st (dst.d),
      .d  (x),
      .out(r_data_out)
  );

  ram #(
      .DATA_WIDTH(WIDTH),
      .ADDR_WIDTH(ADDR_WIDTH)
  ) ram0 (
      .clk(clk),
      .addr(r_addr_out),
      .st(dst.a_star),
      .x(x),
      .out(ram_out)
  );

  assign A = r_addr_out;
  assign D = r_data_out;
  assign A_star = ram_out;
endmodule
