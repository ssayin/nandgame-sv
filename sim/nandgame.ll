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

<INITIAL,macro_expand>"INIT_STACK" { pushbuffer(yytext); }
<INITIAL,macro_expand>"PUSH_D" { pushbuffer(yytext); }
<INITIAL,macro_expand>"POP_D" { pushbuffer(yytext); }
<INITIAL,macro_expand>"POP_A" { pushbuffer(yytext); }

<INITIAL,macro_expand>"PUSH_VALUE"[ \t]* { BEGIN(expect_num); drv.next_file = "PUSH_VALUE"; }
<expect_num>{dec}[ \t]*\n { drv.arg1 = 0; pushbuffer(drv.next_file); BEGIN(macro_expand); }
<macro_expand>"$1" { return make_Number("0", 10); }

<INITIAL,macro_expand>"ADD" { pushbuffer(yytext); }
<INITIAL,macro_expand>"SUB" { pushbuffer(yytext); }
<INITIAL,macro_expand>"NEG" { pushbuffer(yytext); }
<INITIAL,macro_expand>"AND" { pushbuffer(yytext); }
<INITIAL,macro_expand>"OR" { pushbuffer(yytext); }
<INITIAL,macro_expand>"EQ" { pushbuffer(yytext); }
<INITIAL,macro_expand>"GT" { pushbuffer(yytext); }
<INITIAL,macro_expand>"LT" { pushbuffer(yytext); }
<INITIAL,macro_expand>"NOT" { pushbuffer(yytext); }
<INITIAL,macro_expand>"GOTO" { pushbuffer(yytext); }
<INITIAL,macro_expand>"IF-GOTO" { pushbuffer(yytext); }
<INITIAL,macro_expand>"PUSH_MEM" { pushbuffer(yytext); }
<INITIAL,macro_expand>"POP_MEM" { pushbuffer(yytext); }
<INITIAL,macro_expand>"PUSH_STATIC" {  }
<INITIAL,macro_expand>"POP_STATIC" {  }

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
 }
%%

 yy::parser::symbol_type make_Number(const std::string& str,int base) {
  errno = 0;
  constexpr uint16_t MAX_ADDR = 0x7FFF;
    uint16_t ret;
  try {
         ret = std::stoi(str.c_str(),NULL, base);
          if (0 > ret || ret > MAX_ADDR) 
            throw yy::parser::syntax_error ("unsigned integer limit is: 0x7FFF,you gave  " + str);
  } catch(const std::out_of_range& ex) {
    std::throw_with_nested(yy::parser::syntax_error ("unsigned integer limit is: 0x7FFF,you gave  " + str));
  }
    
  return yy::parser::make_Number(ret);
 }

void pushbuffer(std::string file) {
  std::transform(file.begin(),file.end(), file.begin(), tolower);
  yyin = fopen(file.c_str(),"r");

  if (!yyin)
    throw std::runtime_error("cannot open " + file);

  yypush_buffer_state(yy_create_buffer(yyin,YY_BUF_SIZE));
}
