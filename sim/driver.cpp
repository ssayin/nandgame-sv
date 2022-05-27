#include "driver.hpp"
#include "parser.hpp"

#include <bitset>
#include <iostream>

int driver::parse() {
  yy::parser parse(*this);
  int res = 0;
  try {
    res = parse();
  } catch (const std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
  if (!res) {
    for (const auto &a : mod_later) {
      auto it = def.find(a.first);
      if (it == def.end())
        std::cerr << a.first << " is undefined in instruction number "
                  << std::to_string(a.second);
      else {
        insts[a.second] = it->second;
      }
    }
    for (auto a : insts) {
      std::bitset<16> bits{a};
      std::cout << bits << std::endl;
    }
  }

  return res;
}

int driver::operator()() { return this->parse(); }