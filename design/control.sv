module control (
    input logic clk,
    input inst_word_t inst,
    output logic jmp_if,
    output logic [15:0] A
);

  inst_word_t in;
  logic [15 : 0] w;
  logic [15 : 0] mem_X;
  logic [15 : 0] alu_Y;
  logic [15 : 0] alu_out;

  logic [15 : 0] D;
  logic [15 : 0] A_star;


  inst_decoder decoder (
      .inst(inst),
      .sm(in.sm),
      .ci(in.kind),
      .opc(in.opc),
      .dst(in.dst),
      .j(in.j),
      .w(w)
  );

  combined_memory mem (
      .clk(clk),
      .dst(in.dst),
      .x(mem_X),
      .A(A),
      .D(D),
      .A_star(A_star)
  );

  mux2 mux2_sm (
      .sel(in.sm),
      .d0 (A),
      .d1 (A_star),
      .out(alu_Y)
  );

  mux2 mux2_ci (
      .sel(in.kind),
      .d0 (w),
      .d1 (alu_out),
      .out(mem_X)
  );

  alu alu0 (
      .opc(in.opc),
      .x  (D),
      .y  (alu_Y),
      .out(alu_out)
  );

  condition cond0 (
      .j  (in.j),
      .x  (alu_out),
      .out(jmp_if)
  );
endmodule
