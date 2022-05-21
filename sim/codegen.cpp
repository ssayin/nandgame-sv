#include "inst.hpp"
#include "parser.hpp"

#include <iostream>

int main(int argc, char **argv) {
  yy::parser parser;
  return parser();
}
