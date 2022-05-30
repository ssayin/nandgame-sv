#pragma once
#if !defined(yyFlexLexerOnce)
#undef yyFlexLexer
#define yyFlexLexer nandgameFlexLexer
#include <FlexLexer.h>
#endif

#undef YY_DECL
#define YY_DECL nandgame::parser::symbol_type nandgame::lexer::lex()

#include "parser.hpp"

namespace nandgame {
class driver;

class lexer : public yyFlexLexer {
public:
  explicit lexer(driver &drv) : drv(drv) {}
  ~lexer() override = default;
  virtual parser::symbol_type lex();

private:
  driver &drv;
};

} // namespace nandgame
