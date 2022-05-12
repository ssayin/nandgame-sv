#pragma once

#include "Token.hpp"

#include <stack>
#include <vector>

class Parser {
public:
  Parser(const std::vector<Token> &toks);

private:
  bool expr();
  bool ci();

  bool accept(Token::Type tok);
  bool acceptAny(std::initializer_list<Token::Type> l);
  bool expectAny(std::initializer_list<Token::Type> l);

  bool isDataExpr();
  bool isOperator();
  void expectOperand(std::initializer_list<Token::Type> l);

  bool acceptThenExpect(std::initializer_list<Token::Type> l,
                        std::initializer_list<Token::Type> m) {

    return acceptAny(l) && expectAny(m);
  }

  std::vector<Token> toks;
  std::vector<Token>::iterator it;

  bool flag = false;
  std::initializer_list<Token::Type> t{Token::Type::D};
  std::initializer_list<Token::Type> s{Token::Type::A, Token::Type::AStar};
  Token::Type ty;
};
