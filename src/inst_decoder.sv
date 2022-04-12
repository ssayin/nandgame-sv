module inst_decoder (
    input inst_word_t inst,
    output logic ci,
    output logic sm,
    output op_flag_t opc,
    output dst_flag_t dst,
    output jmp_flag_t j,
    output logic [15 : 0] w
);

  assign ci = inst.kind;
  assign w[15] = ~inst.kind & inst[15];
  assign w[14] = ~inst.kind & inst[14];
  assign w[13] = ~inst.kind & inst[13];
  assign w[12] = ~inst.kind & inst[12];
  assign w[11] = ~inst.kind & inst[11];
  assign w[10] = ~inst.kind & inst[10];
  assign w[9] = ~inst.kind & inst[9];
  assign w[8] = ~inst.kind & inst[8];
  assign w[7] = ~inst.kind & inst[7];
  assign w[6] = ~inst.kind & inst[6];
  assign w[5] = ~inst.kind & inst[5];
  assign w[4] = ~inst.kind & inst[4];
  assign w[3] = ~inst.kind & inst[3];
  assign w[2] = ~inst.kind & inst[2];
  assign w[1] = ~inst.kind & inst[1];
  assign w[0] = ~inst.kind & inst[0];
  assign sm = inst.sm & inst.kind;
  assign opc[5] = inst.opc[5] & inst.kind;
  assign opc[4] = inst.opc[4] & inst.kind;
  assign opc[3] = inst.opc[3] & inst.kind;
  assign opc[2] = inst.opc[2] & inst.kind;
  assign opc[1] = inst.opc[1] & inst.kind;
  assign opc[0] = inst.opc[0] & inst.kind;
  assign dst[2] = ~inst.kind | inst.dst[2];
  assign dst[1] = inst.kind & inst.dst[1];
  assign dst[0] = inst.kind & inst.dst[0];
  assign j[2] = inst.j[2] & inst.kind;
  assign j[1] = inst.j[1] & inst.kind;
  assign j[0] = inst.j[0] & inst.kind;

endmodule
