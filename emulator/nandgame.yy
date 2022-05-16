
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


  constexpr uint16_t to_op(uint16_t o) {
      return (o << 6);
    }

    constexpr uint16_t to_dest(uint16_t d) {
      return (d << 3);
    }

    constexpr uint16_t to_jump(uint16_t j) {
      return j;
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

%type <uint16_t>  EXPR DST MASGN J ADDR  NADDR ND CI CI_OPT_J


%%

S: EXPR { std::cout << $1 << std::endl;  }
EXPR: 
           A Assign Number { $$ = $3; }

        | A Assign CI_OPT_J { $$ = to_dest(DstA) | to_op($3) | InstKindCI; }
        | D Assign CI_OPT_J { $$ =  to_dest(DstD) | $3  | InstKindCI; }
        | AStar Assign CI_OPT_J { $$ =  to_dest(DstAStar) | $3  | InstKindCI;  }
        | MASGN Assign CI_OPT_J { $$ = to_dest($1) | $3  | InstKindCI; }

        | CI ";" J { $$ =  InstKindCI | to_op($1); }
        | JMP { $$ = InstKindCI | 0x7; }
 
MASGN: 
       DST Comma DST Comma DST { $$ = $1 | $3 | $5; }
    | DST Comma DST { $$ = $1 | $3; }


DST: 
       AStar { $$ = DstAStar; }
    | A { $$ = DstA; }
    | D { $$ = DstD; }

ADDR: A { $$ = 0x00; } | AStar { $$ = 0x40; }

NADDR: 
      Not ADDR { $$ = 0x26; }
      | ADDR { $$ = 0x22; }
ND: 
      Not D { $$ = 0x10; }
      | D { $$ = 0xA;  }

CI_OPT_J:   CI { $$ = $1;  }
                 | CI ";" J { $$ = $1 | $3; }

CI:   NADDR
     | NADDR "+" ND
     | NADDR "&" ND

     | ND { $$ = $1; }
     | ND "+" NADDR
     | ND "&" NADDR

     | D "-" ADDR
     | ADDR "-" D
     | D "|" ADDR
     | ADDR "|" D

     | ADDR "+" One
     | ADDR "-" One
     | D "+" One
     | D "-" One

     | One
     | Zero

     | Minus ADDR
     | Minus D

J:     
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
  std::cout << "Input: " << std::flush;
  yy::parser parse;
  return parse();
}