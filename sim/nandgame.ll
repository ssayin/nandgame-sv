%{
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include "parser.hpp"
#include "driver.hpp"
%}

%x expect_num 
%x macro_expand 

%{
  #define YY_DECL yy::parser::symbol_type yylex (driver& drv)
  yy::parser::symbol_type make_Number(const std::string& str,int base);
  uint16_t number_boundary_check(const std::string& str, int base);
  void pushbuffer(std::string file);
%}

iddef [a-zA-Z][a-zA-Z_0-9]*
dec [0-9]+
hex 0[xX][0-9a-fA-F]+ 
octal 0[0-7]+ 
space [ \t]+

%option noyywrap

%%
<*>{space} ; 
<INITIAL,macro_expand>^#.*$ ; 

<INITIAL,macro_expand>"1"     { return yy::parser::make_One(); }
<INITIAL,macro_expand>"0"     { return yy::parser::make_Zero(); }


<INITIAL,macro_expand>"D"     { return yy::parser::make_D(); }
<INITIAL,macro_expand>"A"     { return yy::parser::make_A();}
<INITIAL,macro_expand>"*A"    { return yy::parser::make_AStar(); }

{octal} { return make_Number(yytext,8); }
{dec}   { return make_Number(yytext,10); }
{hex}   { return make_Number(yytext,16); }

<INITIAL,macro_expand>"+"     { return yy::parser::make_Plus(); }
<INITIAL,macro_expand>"-"     { return yy::parser::make_Minus(); }
<INITIAL,macro_expand>"&"     { return yy::parser::make_And(); }
<INITIAL,macro_expand>"~"     { return yy::parser::make_Not(); }
<INITIAL,macro_expand>";"     { return yy::parser::make_Semicolon(); }
<INITIAL,macro_expand>","     { return yy::parser::make_Comma(); }
<INITIAL,macro_expand>"="     { return yy::parser::make_Assign(); }
<INITIAL,macro_expand>"|"     { return yy::parser::make_Or(); }

<INITIAL,macro_expand>"JGT"   { return yy::parser::make_JGT();  }
<INITIAL,macro_expand>"JEQ"   { return yy::parser::make_JEQ(); }
<INITIAL,macro_expand>"JGE"   { return yy::parser::make_JGE();  }
<INITIAL,macro_expand>"JLT"   { return yy::parser::make_JLT();  }
<INITIAL,macro_expand>"JNE"   { return yy::parser::make_JNE(); }
<INITIAL,macro_expand>"JLE"   { return yy::parser::make_JLE();  }
<INITIAL,macro_expand>"JMP"   { return yy::parser::make_JMP();  }

<*>"\n" { return yy::parser::make_Newline(); } 

<INITIAL,macro_expand>"LABEL" { return yy::parser::make_LABEL(); }
<INITIAL,macro_expand>"DEFINE" { return yy::parser::make_DEFINE(); }

<INITIAL,macro_expand>
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
"GOTO" |
"IF-GOTO" |
"PUSH_MEM" |
"POP_MEM" { pushbuffer(yytext); }


<INITIAL,macro_expand>"PUSH_VALUE"[ \t]* { BEGIN(expect_num); drv.next_file = "PUSH_VALUE"; }
<expect_num>{octal}[ \t]*\n { drv.arg1 = number_boundary_check(yytext,8); pushbuffer(drv.next_file); BEGIN(macro_expand); }

<expect_num>{dec}[ \t]*\n { drv.arg1 = number_boundary_check(yytext, 10); pushbuffer(drv.next_file); BEGIN(macro_expand); }

<expect_num>{hex}[ \t]*\n { drv.arg1 = number_boundary_check(yytext, 16); pushbuffer(drv.next_file); BEGIN(macro_expand); }

<macro_expand>"$1" { return yy::parser::make_Number(drv.arg1); }

<INITIAL,macro_expand>"PUSH_STATIC"[ \t]* { BEGIN(expect_num); drv.next_file = "PUSH_STATIC"; }

<INITIAL,macro_expand>"POP_STATIC"[ \t]* { BEGIN(expect_num); drv.next_file = "POP_STATIC"; }

<INITIAL,macro_expand>{iddef} { return yy::parser::make_IdDef(yytext); }

<*>.       { std::cerr<< "lexer: token \"" 
                   << yytext[0] 
                   << "\" is not expected" 
                   << std::endl; 
                    exit(1);
                    }

<<EOF>> {   
  fclose(yyin);
  yypop_buffer_state();
  if (!YY_CURRENT_BUFFER) {
    yyrestart(stdin);
   yyterminate();
  }
  BEGIN(INITIAL);
 }
%%

 yy::parser::symbol_type make_Number(const std::string& str,int base) {   
  return yy::parser::make_Number(number_boundary_check(str, base));
 }


uint16_t number_boundary_check(const std::string& str, int base) {
  errno = 0;
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

void pushbuffer(std::string file) {
  std::transform(file.begin(),file.end(), file.begin(), tolower);
  yyin = fopen(file.c_str(),"r");

  if (!yyin)
    throw std::runtime_error("cannot open " + file);

  yypush_buffer_state(yy_create_buffer(yyin,YY_BUF_SIZE));
}
