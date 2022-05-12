#pragma once

#include <string>
#include <string_view>
#include <vector>

#include "Token.hpp"

class Lexer {
public:
  Lexer(std::string_view line);
  std::vector<Token> tokens();

private:
  void consumeOneToken();
  void consumeKeyword();
  void consumeNumber();
  bool isNewLine();
  bool isEnd();
  void consumeUntil(Token::Type type, std::string_view str);

  std::string_view ln;
  std::vector<Token> toks;
};
