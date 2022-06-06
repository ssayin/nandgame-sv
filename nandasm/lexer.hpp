#pragma once
#if !defined(yyFlexLexerOnce)
#undef yyFlexLexer
#define yyFlexLexer nandgameFlexLexer
#include <FlexLexer.h>
#endif

#undef YY_DECL
#define YY_DECL nandgame::parser::symbol_type nandgame::lexer::lex()

#include "parser.hpp"

#include <deque>
#include <fstream>
#include <memory>

namespace nandgame {
class driver;

class lexer : public yyFlexLexer {
public:
  explicit lexer(driver &drv) : drv(drv) {}
  ~lexer() override = default;
  virtual parser::symbol_type lex();
  void pushbuffer(std::string file);

private:
  std::deque<std::unique_ptr<std::ifstream>> ifsStack;
  driver &drv;
};

} // namespace nandgame
