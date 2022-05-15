`ifndef DEFS_SV_INCLUDED
`define DEFS_SV_INCLUDED

package defs;

  typedef struct packed {
    logic a;
    logic d;
    logic a_star;
  } dst_flag_t;

  typedef struct packed {
    logic zx;
    logic nx;
    logic zy;
    logic ny;
    logic f;
    logic no;
  } op_flag_t;

  typedef struct packed {
    logic lt;
    logic eq;
    logic gt;
  } jmp_flag_t;

  typedef struct packed {
    logic kind;
    logic [1:0] ignored;
    logic sm;
    op_flag_t opc;
    dst_flag_t dst;
    jmp_flag_t j;
  } inst_word_t;

endpackage

`endif
