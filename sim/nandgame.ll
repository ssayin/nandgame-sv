%{
#include <cstdlib>
#include <iostream>
#include "parser.hpp"
%}

%{
#define YY_DECL yy::parser::symbol_type yylex ()
 yy::parser::symbol_type make_Number(const std::string& str, int base);
%}

iddef [a-zA-Z][a-zA-Z_0-9]*
dec [0-9]+
hex 0[xX][0-9a-fA-F]+ 
octal 0[0-7]+ 

%option noyywrap

%%
[ \t]+ ; 
^#.*$ ; 

"1"     { return yy::parser::make_One(); }
"0"     { return yy::parser::make_Zero(); }


"D"     { return yy::parser::make_D(); }
"A"     { return yy::parser::make_A();}
"*A"    { return yy::parser::make_AStar(); }

{octal} { return make_Number(yytext, 8); }
{dec}  { return make_Number(yytext, 10); }
{hex} { return make_Number(yytext, 16); }

"+"     { return yy::parser::make_Plus(); }
"-"     { return yy::parser::make_Minus(); }
"&"     { return yy::parser::make_And(); }
"~"     { return yy::parser::make_Not(); }
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

"\n" { return yy::parser::make_Newline(); } 

"LABEL" { return yy::parser::make_LABEL(); }
"DEFINE" { return yy::parser::make_DEFINE(); }
{iddef} { return yy::parser::make_IdDef(yytext); }

"@" { return yy::parser::make_YYEOF(); }

.       { std::cerr << "lexer: token \"" 
                    << yytext[0] 
                    << "\" is not expected" 
                    << std::endl; 
                    exit(1);
                    }

<<EOF>> { return yy::parser::make_YYEOF(); }
%%

 yy::parser::symbol_type make_Number(const std::string& str, int base) {
  errno = 0;
  constexpr uint16_t MAX_ADDR = 0x7FFF;
    uint16_t ret;
  try {
         ret = std::stoi(str.c_str(), NULL, base);
          if (0 > ret || ret > MAX_ADDR) 
            throw yy::parser::syntax_error ("unsigned integer limit is: 0x7FFF, you gave  " + str);
  } catch(const std::out_of_range& ex) {
    std::throw_with_nested(yy::parser::syntax_error ("unsigned integer limit is: 0x7FFF, you gave  " + str));
  }
    
  return yy::parser::make_Number(ret);
 }

