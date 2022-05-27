%{
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include "parser.hpp"
%}

%{
  class driver;
  #define YY_DECL yy::parser::symbol_type yylex (driver& drv)
  yy::parser::symbol_type make_Number(const std::string& str, int base);
  void pushbuffer(std::string file);
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

"INIT_STACK" { pushbuffer(yytext); }
"PUSH_D" { pushbuffer(yytext); }
"POP_D" { pushbuffer(yytext); }
"POP_A" { pushbuffer(yytext); }

"PUSH_VALUE" { }

"ADD" { pushbuffer(yytext); }
"SUB" { pushbuffer(yytext); }
"NEG" { pushbuffer(yytext); }
"AND" { pushbuffer(yytext); }
"OR" { pushbuffer(yytext); }
"EQ" { pushbuffer(yytext); }
"GT" { pushbuffer(yytext); }
"LT" { pushbuffer(yytext); }
"NOT" { pushbuffer(yytext); }
"GOTO" { pushbuffer(yytext); }
"IF-GOTO" { pushbuffer(yytext); }
"PUSH_MEM" { pushbuffer(yytext); }
"POP_MEM" { pushbuffer(yytext); }
"PUSH_STATIC" {}
"POP_STATIC" {}

{iddef} { return yy::parser::make_IdDef(yytext); }

.       { std::cerr << "lexer: token \"" 
                    << yytext[0] 
                    << "\" is not expected" 
                    << std::endl; 
                    exit(1);
                    }

<<EOF>> {   
  yypop_buffer_state();
  if (!YY_CURRENT_BUFFER) {
    yyrestart(stdin);
   yyterminate();
  }
 }
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

void pushbuffer(std::string file) {
  std::transform(file.begin(), file.end(), file.begin(), tolower);
  yyin = fopen(file.c_str(), "r");

  if (!yyin)
    throw std::runtime_error("cannot open " + file);

  yypush_buffer_state(yy_create_buffer(yyin, YY_BUF_SIZE));
}
