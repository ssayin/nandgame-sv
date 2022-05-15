#pragma once

#include <string>

struct Token {
  enum class Type {
    JGT = 0x1,
    JEQ,
    JGE,
    JLT,
    JNE,
    JLE,
    JMP,
    AStar,
    D = 1 << 4,
    A = 1 << 5,
    Semicolon,
    Comma,
    Plus,
    Minus,
    Equal,
    Not,
    Number,
    SingleBit,
    And,
    End
  };

  Type type;
  std::string lexeme;
};
