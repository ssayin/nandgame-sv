%{
#include "parser.hpp"
#include "driver.hpp"
#include "lexer.hpp"

#define yyterminate() nandgame::parser::make_END();
%}

%{
  #include <algorithm>
  #include <fstream>
  #include <memory>
  nandgame::parser::symbol_type make_Number(const std::string& str,int base);
  uint16_t number_boundary_check(const std::string& str, int base);
%}

iddef [a-zA-Z][a-zA-Z_0-9]*
dec [0-9]+
hex 0[xX][0-9a-fA-F]+ 
octal 0[0-7]+ 
space [ \t]+

%option noyywrap c++ yyclass="lexer" prefix="nandgame"

%%
{space} ; 
^#.*$ ; 

"1"     { return nandgame::parser::make_One(); }
"0"     { return nandgame::parser::make_Zero(); }


"D"     { return nandgame::parser::make_D(); }
"A"     { return nandgame::parser::make_A();}
"*A"    { return nandgame::parser::make_AStar(); }

{octal} { return make_Number(yytext,8); }
{dec}   { return make_Number(yytext,10); }
{hex}   { return make_Number(yytext,16); }

"+"     { return nandgame::parser::make_Plus(); }
"-"     { return nandgame::parser::make_Minus(); }
"&"     { return nandgame::parser::make_And(); }
"~"     { return nandgame::parser::make_Not(); }
";"     { return nandgame::parser::make_Semicolon(); }
","     { return nandgame::parser::make_Comma(); }
"="     { return nandgame::parser::make_Assign(); }
"|"     { return nandgame::parser::make_Or(); }

"JGT"   { return nandgame::parser::make_JGT();  }
"JEQ"   { return nandgame::parser::make_JEQ();  }
"JGE"   { return nandgame::parser::make_JGE();  }
"JLT"   { return nandgame::parser::make_JLT();  }
"JNE"   { return nandgame::parser::make_JNE();  }
"JLE"   { return nandgame::parser::make_JLE();  }
"JMP"   { return nandgame::parser::make_JMP();  }

"\n" { return nandgame::parser::make_Newline(); } 
"LABEL" { return nandgame::parser::make_LABEL(); }
"DEFINE" { return nandgame::parser::make_DEFINE(); }

"INIT_STACK" | 
"PUSH_D" |
"POP_D" |
"POP_A" |
"ADD" | 
"SUB" | 
"NEG" | 
"AND" |
"OR" |
"EQ" | 
"GT" |
"LT" |
"NOT" |
"PUSH_MEM" |
"POP_MEM" |
"RETURN" { pushbuffer(yytext); }

"PUSH_VALUE" |
"GOTO" |
"IF-GOTO" |
"PUSH_STATIC" |
"POP_STATIC" |
"PUSH_ARG" |
"POP_ARG" |
"PUSH_LOCAL" |
"POP_LOCAL" { return nandgame::parser::make_Macro1(yytext); }

"CALL" |
"FUNCTION" { return nandgame::parser::make_Macro2(yytext); }

"$num" { 
  return nandgame::parser::make_MacroNum();
}
"$str" {
  return nandgame::parser::make_MacroStr();
}


{iddef} { return nandgame::parser::make_IdDef(yytext); }

.       { std::cerr<< "lexer: token \"" 
                   << yytext[0] 
                   << "\" is not expected" 
                   << std::endl; 
                    exit(1);
                    }

<<EOF>> {   
  yypop_buffer_state();
  if (!ifsStack.empty()) ifsStack.pop_front();
  if (!drv.arg_stack.empty()) drv.arg_stack.pop_front();
  if (!YY_CURRENT_BUFFER)
   return yyterminate();
 }
%%

 nandgame::parser::symbol_type make_Number(const std::string& str,int base) {   
  return nandgame::parser::make_Number(number_boundary_check(str, base));
 }


uint16_t number_boundary_check(const std::string& str, int base) {
  constexpr uint16_t MAX_ADDR = 0x7FFF;
  uint16_t ret;
  try {
         ret = std::stoi(str.c_str(),NULL, base);
          if (0 > ret || ret > MAX_ADDR) 
            throw std::runtime_error ("unsigned integer limit is: 0x7FFF,you gave  " + str);
  } catch(const std::out_of_range& ex) {
    std::throw_with_nested(std::runtime_error("unsigned integer limit is: 0x7FFF,you gave  " + str));
  }

  return ret;
}

void nandgame::lexer::pushbuffer(std::string file) { 
  constexpr std::size_t max_buf_stack_size = 5; // looks good for the time being
  constexpr std::size_t max_buf_size = 1024;
  if (ifsStack.size() > max_buf_stack_size) throw std::runtime_error("nested macro inclusion limit is exceeded"); 
  std::transform(file.begin(),file.end(), file.begin(), tolower);
  ifsStack.emplace_front(std::make_unique<std::ifstream>(file, std::ifstream::in));
  yypush_buffer_state(yy_create_buffer(*(ifsStack.front()), max_buf_size));
}
