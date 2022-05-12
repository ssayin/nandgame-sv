#include <algorithm>
#include <cctype>
#include <iostream>
#include <string_view>
#include <unordered_map>
#include <vector>

#include "Lexer.hpp"

bool Lexer::isNewLine() { return ln[0] == '\n'; }
bool Lexer::isEnd() { return ln[0] == '\0'; }

std::unordered_map<char, Token::Type> l{
    {'D', Token::Type::D},         {'A', Token::Type::A},
    {';', Token::Type::Semicolon}, {'=', Token::Type::Equal},
    {'+', Token::Type::Plus},      {'-', Token::Type::Minus},
    {'~', Token::Type::Not},       {',', Token::Type::Comma},
};

void Lexer::consumeOneToken() {
  if (ln[0] == ' ' || ln[0] == '\t' || ln[0] == '\r') {
    ln.remove_prefix(1);
    return;
  }

  if (isdigit(ln[0])) {
    consumeNumber();
    return;
  }

  auto it = l.find(ln[0]);
  if (it != l.end()) {
    toks.push_back({it->second, std::string{it->first}});
    ln.remove_prefix(1);
    return;
  }

  if (ln[0] == 'J') {
    consumeKeyword();
    return;
  }

  if (ln[0] == '*' && ln[1] == 'A') {
    toks.push_back({Token::Type::AStar, "*A"});
    ln.remove_prefix(2);
    return;
  }

  throw std::exception();
}

Lexer::Lexer(std::string_view line) : ln(line) {
  while (!isEnd() && !isNewLine()) {
    consumeOneToken();
  }

  toks.push_back({Token::Type::End, ""});
}

void Lexer::consumeUntil(Token::Type type, std::string_view str) {
  auto last = std::min(ln.find_first_not_of(str), ln.size());
  toks.push_back({type, std::string{ln.substr(0, last)}});
  ln.remove_prefix(last);
}

void Lexer::consumeNumber() {
  if (!isdigit(ln[1])) {
    if (ln[0] == '0' || ln[0] == '1') {
      toks.push_back({Token::Type::SingleBit, std::string(1, ln[0])});
      ln.remove_prefix(1);
      return;
    }
  }
  consumeUntil(Token::Type::Number, "0123456789");
}

void Lexer::consumeKeyword() {
  auto last =
      std::min(ln.find_first_not_of(
                   "ABCDEFGHIJKLMNOPRSTUVWXYZabcdefghijklmnoprstuvwxyz"),
               ln.size());

  static const std::unordered_map<std::string_view, Token::Type> m{
      {"JMP", Token::Type::JMP}, {"JEQ", Token::Type::JEQ},
      {"JGE", Token::Type::JGE}, {"JGT", Token::Type::JGT},
      {"JLE", Token::Type::JLE}, {"JLT", Token::Type::JLT},
      {"JNE", Token::Type::JNE},
  };

  auto it = m.find(ln.substr(0, last));

  if (it == m.end())
    throw std::exception();
  toks.push_back({it->second, std::string{it->first}});
  ln.remove_prefix(last);
}

std::vector<Token> Lexer::tokens() { return toks; }
