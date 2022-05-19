%{
#include <cstdlib>
#include <iostream>
#include "parser.hpp"
%}

%{
#define YY_DECL yy::parser::symbol_type yylex ()
 yy::parser::symbol_type make_Number(const std::string& str, int base);
%}

%option noyywrap

%%
0[0-7]+  { return make_Number(yytext, 8); }
0[xX][0-9a-fA-F]+  { return make_Number(yytext, 16); }
"1"     { return yy::parser::make_One(); }
"0"     { return yy::parser::make_Zero(); }
[0-9]+  { return make_Number(yytext, 10); }
"+"     { return yy::parser::make_Plus(); }
"-"     { return yy::parser::make_Minus(); }
"&"     { return yy::parser::make_And(); }
"~"     { return yy::parser::make_Not(); }
"D"     { return yy::parser::make_D(); }
"*A"    { return yy::parser::make_AStar(); }
"A"     { return yy::parser::make_A();}
";"     { return yy::parser::make_Semicolon(); }
","     { return yy::parser::make_Comma(); }
"="     { return yy::parser::make_Assign(); }
"|"     { return yy::parser::make_Or(); }
"JGT"   { return yy::parser::make_JGT();  }
"JEQ"   {  return yy::parser::make_JEQ(); }
"JGE"   { return yy::parser::make_JGE();  }
"JLT"   { return yy::parser::make_JLT();  }
"JNE"   { return yy::parser::make_JNE(); }
"JLE"   { return yy::parser::make_JLE();  }
"JMP"   { return yy::parser::make_JMP();  }
"\n"    { return yy::parser::make_YYEOF(); }
<<EOF>> { return yy::parser::make_YYEOF(); }
[ \t]+  {  }
.       { std::cerr << "Token \"" 
                    << yytext[0] 
                    << "\" is not in the language" 
                    << std::endl; 
                    exit(1);
                    }
%%

 yy::parser::symbol_type make_Number(const std::string& str, int base) {
  constexpr uint16_t MAX_ADDR = 0x7FFF;
  uint16_t ret = strtol(str.c_str(), NULL, base);
  if (0 > ret || ret > MAX_ADDR)
    throw yy::parser::syntax_error ("unsigned integer limit is: 0x7FFF, you gave  " + str);
  return yy::parser::make_Number(ret);
 }