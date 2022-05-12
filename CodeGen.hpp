#pragma once

#include <iomanip>
#include <iostream>
#include <numeric>

#include "Token.hpp"

#include <unordered_map>
#include <vector>

std::unordered_map<std::string, uint16_t> ci_table{{"", 2}, {}};

template <typename T> void dump(T v, char term = '\n') {
  std::cout << std::hex << std::uppercase << std::setfill('0')
            << std::setw(sizeof(T) * 2) << v << " : ";
  for (std::size_t i{}; i != sizeof(T); ++i, v >>= 8) {
    std::cout << std::setw(2) << static_cast<unsigned>(T(0xFF) & v) << ' ';
  }
  std::cout << std::dec << term;
}

class CodeGen {

public:
  uint16_t inst = 0xA00;

  void setDest(Token::Type t) { inst |= static_cast<uint16_t>(t); }
  void setJmp(Token::Type t) { inst |= static_cast<uint16_t>(t); };
  void setCIToken(Token::Type t, bool neg) {
    if (t == Token::Type::D)
      inst &= ~(static_cast<uint16_t>(Token::Type::D) << 4);
    if (neg)
      inst |= (static_cast<uint16_t>(Token::Type::D) << 3);
    if (t == Token::Type::A || t == Token::Type::AStar) {
      inst &= ~(static_cast<uint16_t>(Token::Type::A) << 1);
      if (neg)
        inst |= ~(static_cast<uint16_t>(Token::Type::A));
      if (t == Token::Type::AStar)
        ;
    }
    if (t == Token::Type::Plus) {
    }
  }
  void setCi(uint16_t flags) { inst |= flags; }
};
