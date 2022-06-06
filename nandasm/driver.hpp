#pragma once

#include <cstdint>
#include <deque>
#include <map>
#include <string>

#include "lexer.hpp"
#include "parser.hpp"
#include <optional>

namespace nandgame {

class driver {
  using instruction_type = uint16_t;

public:
  struct Arg {
    instruction_type num;
    std::optional<std::string> id;
  };

  driver() noexcept;
  int parse();
  int operator()();

  instruction_type inst_count = 0;
  std::map<std::string, instruction_type> def;
  std::map<std::string, instruction_type> mod_later;
  std::deque<instruction_type> insts;
  std::deque<Arg> arg_stack;
  std::string next_file;

  lexer lx;
  parser pr;
};
} // namespace nandgame
