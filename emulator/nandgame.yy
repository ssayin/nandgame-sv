
%skeleton "lalr1.cc"
%require "3.8.2"
%header

%define api.token.raw

%define api.token.constructor
%define api.value.type variant
//%define api.value.automove
%define parse.assert


%code requires {
#include <cstdlib>
#include <iostream>
#include <string>
}

%define parse.trace
%define parse.error detailed

%code {
#define YY_DECL \ 
    yy::parser::symbol_type yylex ()
    YY_DECL;

    constexpr uint16_t DstA = 0x4;
    constexpr uint16_t DstD = 0x2;
    constexpr uint16_t DstAStar = 0x1;

    constexpr uint16_t InstKindCI = 0x8000;

    constexpr uint16_t ZX0 = 0xFFDF;
    constexpr uint16_t ZY0 = 0xFFF7;
    constexpr uint16_t ZX0ZY0 = ZX0 & ZY0;
    constexpr uint16_t OP0 = 0xFFFD;


  constexpr uint16_t make_ci(uint16_t o) {
      return (o << 6);
    }

    constexpr uint16_t make_dst(uint16_t d) {
      return (d << 3);
    }

    constexpr uint16_t make_expr(uint16_t destination, uint16_t sm_opcode, uint16_t jmp = 0) {
      return make_dst(destination) | sm_opcode | jmp | InstKindCI;
    }

}

%token Comma ","
%token One "1"
%token Zero "0"
%token Semicolon ";"
%token Assign "="
%token A "A"
%token AStar "*A"
%token D "D"
%token Not "~"
%token Minus "-"
%token And "&"
%token Plus "+"
%token Or "|"
//%token End "\n"
%token JGT "JGT"
%token JEQ "JEQ"
%token JGE "JGE"
%token JLT "JLT"
%token JNE "JNE"
%token JLE "JLE"
%token JMP "JMP"

%token <uint16_t> Number "Number"

%type <uint16_t>  expr dst multi_asgn jump addr  opt_naddr opt_nd ci ci_opt_jump binary_op

%%
s: expr { std::cout << $1 << std::endl;  }
expr:  A Assign Number { $$ = $3; }
        | A Assign ci_opt_jump { $$ = make_expr(DstA, $3); }
        | D Assign ci_opt_jump { $$ =  make_expr(DstD, $3);; }
        | AStar Assign ci_opt_jump { $$ =  make_expr(DstAStar, $3);  }
        | multi_asgn Assign ci_opt_jump { $$ = make_expr($1, $3); }
        | ci ";" jump { $$ =  make_expr(0, $1, $3); }
        | JMP {  $$ =  make_expr(0, 0, 0x7);  }
 
multi_asgn: dst Comma dst Comma dst { $$ = $1 | $3 | $5; }
                   |dst Comma dst { $$ = $1 | $3; }

dst: 
       AStar { $$ = DstAStar; }
    | A { $$ = DstA; }
    | D { $$ = DstD; }

addr: A { $$ = 0x00; } | AStar { $$ = 0x40; }
addr_one: addr | One
d_one: D | One

opt_naddr: 
      Not addr { $$ = 0x26; }
      | addr { $$ = 0x22; }
opt_nd: 
      Not D { $$ = 0x10; }
      | D { $$ = 0xA;  }

ci_opt_jump:   ci { $$ = $1;  }
                 | ci ";" jump { $$ = $1 | $3; }

binary_op: "+" { $$ = 0xFFFF; } 
     | "&" { $$ = OP0; }

ci:   opt_naddr { $$ = make_ci($1); }
     | opt_nd { $$ = make_ci($1); }
     | opt_naddr binary_op opt_nd {   $$ =make_ci(ZX0ZY0 & $2 & ( $1 | $3));  }
     | opt_nd binary_op opt_naddr { $$ = make_ci(ZX0ZY0 & $2 & ( $1 | $3)); }

     | D "-" addr_one
     | addr "-" d_one

     | D "|" addr
     | addr "|" D

   //  | ADDR "+" One
    // | D "+" One

     | One
     | Zero

     | Minus addr
     | Minus D

jump:     
        JGT { $$ = 1; }
     | JEQ { $$ = 2; }
     | JGE { $$ = 3; }
     | JLT { $$ = 4; }
     | JNE { $$ = 5; }
     | JLE { $$ = 6; }
     | JMP { $$ = 7; }

%%

void yy::parser::error (const std::string& m) {
  std::cerr << m << std::endl;
}


int main() {
  std::cout << "Input: "  << std::flush;
  yy::parser parse;
  return parse();
}