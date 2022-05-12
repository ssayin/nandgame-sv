/* <stmt>     ::= <expr> <end>
 * <expr>     ::= <ci> ";" <jump>
 *              | <ci>
 *              | <data>
 *              | "JMP"
 *
 * <data>     ::= <addr> "=" <number>
 *
 * <ci>       ::= <assign> "=" <cic>
 *              | <cic>
 *
 * <assign>   ::= <reg> "," <assign>
 *              | <reg>
 *
 * <cic>      ::= <opt-not> <addr> <op> <opt-not> "D"
 *              | <opt-not> "D" <op> <opt-not> <addr>
 *              | <reg> <aop> <single-bit>
 *              | <opt-not> <reg>
 *              | <opt-neg> <reg>
 *              | <opt-neg> <single-bit>
 *
 * <opt-not>  ::= "~" | ""
 * <opt-neg>  ::= "-" | ""
 * <single-bit> ::= "0" | "1"
 * <addr>     ::= "A" | "*A"
 * <reg>      ::= <addr> | "D"
 * <aop>      ::= "+" | "-"
 * <op>       ::= <aop> | "&"
 * */

#include "Parser.hpp"
#include <algorithm>

#include <iostream>

#include "CodeGen.hpp"

Parser::Parser(const std::vector<Token> &tokens)
    : toks(tokens), it(toks.begin()) {
  expr();
}

bool Parser::isDataExpr() {
  return it->type == Token::Type::A &&
         std::next(it, 1)->type == Token::Type::Equal &&
         std::next(it, 2)->type == Token::Type::Number &&
         std::next(it, 3)->type == Token::Type::End;
}

bool Parser::isOperator() {
  return acceptAny({Token::Type::Plus, Token::Type::Minus, Token::Type::And});
}

bool Parser::expr() {
  return isDataExpr() ||
         acceptThenExpect({Token::Type::JMP}, {Token::Type::End}) || ci();
}

void Parser::expectOperand(std::initializer_list<Token::Type> l) {

  if (accept(Token::Type::SingleBit) || acceptAny(l) ||
      acceptThenExpect({Token::Type::Not}, l)) {

    return;
  }

  throw std::runtime_error("Expected an operand");
}

bool Parser::ci() {
  // assignment part
  CodeGen cg;
  std::stack<Token> st;
  bool minusop = false;

  do {
    st.push(*it);
    expectAny({Token::Type::A, Token::Type::AStar, Token::Type::D});
  } while (accept(Token::Type::Comma));

  if (st.size() == 1 && st.top().type == Token::Type::Not) {
    accept(Token::Type::Not);
    ty = it->type;
    flag = it->type != Token::Type::SingleBit;
    st.push(*it);
    expectOperand({Token::Type::D, Token::Type::A, Token::Type::AStar});
  }

  if (accept(Token::Type::End))
    return st.size() == 1;

  if (accept(Token::Type::Equal)) {
    while (!st.empty()) {
      cg.setDest(st.top().type);
      st.pop();
    }
    st.push(*it);
    ty = it->type;
    flag = it->type != Token::Type::SingleBit;

    expectOperand({Token::Type::D, Token::Type::A, Token::Type::AStar});
  }

  st.push(*it);
  if (isOperator()) {
    minusop = it->type == Token::Type::Minus;
    st.push(*it);
    if (flag)
      expectOperand(ty == Token::Type::D ? s : t);
    else {
      expectOperand({Token::Type::D, Token::Type::A, Token::Type::AStar});
    }
  } else
    st.pop();

  acceptThenExpect({Token::Type::Semicolon},
                   {Token::Type::JEQ, Token::Type::JMP, Token::Type::JNE,
                    Token::Type::JGE, Token::Type::JGT, Token::Type::JLT,
                    Token::Type::JLE});

  expectAny({Token::Type::End});

  if (minusop) {

  }

  else {
    while (!st.empty()) {
      Token::Type p = st.top().type;
      if (p == Token::Type::D || p == Token::Type::A || p == Token::Type::AStar)
        cg.setCIToken(p, st.top().type == Token::Type::Not);
      st.pop();
    }
  }

  dump(cg.inst);

  return true;
}

bool Parser::accept(Token::Type tok) {
  return (it->type == tok) && (it++ != toks.end());
}

bool Parser::acceptAny(std::initializer_list<Token::Type> l) {
  return std::any_of(
      l.begin(), l.end(),
      std::bind(std::mem_fn(&Parser::accept), this, std::placeholders::_1));
}

bool Parser::expectAny(std::initializer_list<Token::Type> l) {
  if (!acceptAny(l))
    throw std::runtime_error(it->lexeme);

  return true;
}
