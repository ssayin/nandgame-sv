#pragma once

#include <cstdint>
#include <deque>
#include <map>
#include <string>

#include "lexer.hpp"
#include "parser.hpp"

namespace nandgame {
class driver {

public:
  driver() noexcept;
  int parse();
  int operator()();

  uint16_t inst_count = 0;
  std::map<std::string, uint16_t> def;
  std::map<std::string, uint16_t> mod_later;
  std::deque<uint16_t> insts;
  uint16_t arg1;
  std::string next_file;

  lexer lx;
  parser pr;

private:
};
} // namespace nandgame
