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
#include <string>
#include <vector>
#include <optional>
}

%define parse.trace
%define parse.error detailed

%code {
#define YY_DECL yy::parser::symbol_type yylex ()
    YY_DECL;
}

%code {
#include "inst.hpp"
#include <iostream>
#include <bitset>
#include <map>

Inst& inst;
uint16_t inst_count = 0;
std::map<std::string, uint16_t> def;
std::map<std::string, uint16_t> mod_later;
}

%token Comma ","
%token One "1"
%token Zero "0"
%token Semicolon "SC"
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
%token <std::string> IdDef "IdDef"
%token DEFINE "DEFINE"
%token LABEL "LABEL"
%token Newline "Newline"

%token <uint16_t> Number "Number"

%type <uint16_t>  dst multi_asgn 
                  jump addr 
                  opt_naddr opt_nd ci 
                  ci_opt_jump binary_op
                  d_one addr_one
                  opt_naddr_one
                  opt_nd_one

%type <std::optional<uint16_t>> expr
%type <std::vector<uint16_t>> exprs 

%%
s:
  exprs {
  for (const auto& a : mod_later) {
    auto it = def.find(a.first);
    if (it == def.end()) 
      yy::parser::error(a.first + " is undefined in instruction number " + std::to_string(a.second));
    else {
      $1[a.second] = it->second; 
    }
  }
  for (auto a : $1) {
    std::bitset<16> bits{a};
    std::cout << bits << std::endl;
  }
}

exprs:
  expr { 
  if ($1.has_value()) { 
    $$.push_back($1.value()); 
    inst_count++;
  }
}
| exprs expr {
  if ($2.has_value()) {
    $1.push_back($2.value());
    inst_count++;
  }
  $$ = std::move($1);
}

end: Newline | YYEOF

expr:
  A Assign Number end { $$ = std::make_optional($3); }
| A Assign IdDef end {
  auto it = def.find($3);
  if (it == def.end()) {
    mod_later.emplace(std::make_pair($3, inst_count)); 
    $$ = std::make_optional(0x0);
  }
  else $$ = std::make_optional(it->second);
}

| A Assign ci_opt_jump end { $$ = make_expr(DstA, $3); }
| D Assign ci_opt_jump end { $$ = make_expr(DstD, $3); }
| AStar Assign ci_opt_jump end { $$ = make_expr(DstAStar, $3); }
| multi_asgn Assign ci_opt_jump end { $$ = make_expr($1, $3); }
| ci "SC" jump end { $$ = make_expr(0, $1, $3); }
| JMP end { $$ = make_expr(0, 0, 0x7); }

| LABEL IdDef end { 
  def.emplace(std::make_pair($2, inst_count));
  $$ = std::nullopt;
}
| DEFINE IdDef Number end {
  def.emplace(std::make_pair($2, $3));
  $$ = std::nullopt;
}
| DEFINE IdDef Zero end {
  def.emplace(std::make_pair($2, 0));
  $$ = std::nullopt;
}
| DEFINE IdDef One end {
  def.emplace(std::make_pair($2, 1));
  $$ = std::nullopt;
}
| Newline {
  $$ = std::nullopt;
}

multi_asgn: 
  dst Comma dst Comma dst { $$ = $1 | $3 | $5; }
| dst Comma dst { $$ = $1 | $3; }

dst:
  AStar { $$ = DstAStar; }
| A { $$ = DstA; }
| D { $$ = DstD; }

addr:
  A { $$ = 0x00; }
| AStar { $$ = 0x40; }

addr_one:
  addr { $$ = $1 | 0x13; }
| One { $$ = 0xE; }

d_one:
  D { $$ = 0x7; }
| One { $$ = 0x32; }

opt_naddr:
  addr { $$ = 0x22 | $1; }
| Not addr { $$ = 0x26 | $2; }

opt_naddr_one:
  opt_naddr { $$ = $1; }
| One { $$ = 0x1F; }

opt_nd:
  D { $$ = 0xA; }
| Not D { $$ = 0x10; }

opt_nd_one:
  opt_nd { $$ = $1; }
| One { $$ = 0x37; }

ci_opt_jump:
  ci { $$ = $1; }
| ci ";" jump { $$ = $1 | $3; }

binary_op:
  "+" { $$ = 0xFFFF; }
| "&" { $$ = OP0; }

ci:
  opt_naddr { $$ = make_ci($1); }
| opt_nd { $$ = make_ci($1); }

| opt_naddr binary_op opt_nd_one {
  $$ = ($3 == 0x37) ? (($1 > 0x26) ? make_ci(0x40 | $3) : make_ci($3))
                    : make_ci(ZX0ZY0 & $2 & ($1 | $3));
}
| opt_nd binary_op opt_naddr_one {
  $$ = ($3 == 0x1F) ? make_ci($3) : make_ci(ZX0ZY0 & $2 & ($1 | $3));
}

| D "-" addr_one { $$ = make_ci($3); }
| addr "-" d_one { $$ = make_ci($1 | $3); }

| D "|" addr { $$ = make_ci($3 | 0x15); }
| addr "|" D { $$ = make_ci($1 | 0x15); }

| Zero { $$ = make_ci(0x2A); }
| Minus One { $$ = make_ci(0x2B); }
| One { $$ = make_ci(0x3F); }
| Minus addr { $$ = make_ci(0x33 | $2); }
| Minus D { $$ = make_ci(0xF); }

jump: 
  JGT { $$ = 1; }
| JEQ { $$ = 2; }
| JGE { $$ = 3; }
| JLT { $$ = 4; }
| JNE { $$ = 5; }
| JLE { $$ = 6; }
| JMP { $$ = 7; }
%%

void yy::parser::error(const std::string &m) { std::cerr << "error: " <<  m << std::endl; }
