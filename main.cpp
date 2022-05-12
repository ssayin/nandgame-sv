#include "Lexer.hpp"
#include "Parser.hpp"
#include "Token.hpp"

#include <iostream>

int main(int argc, char **argv) {
  std::vector<std::string> strs = {
      "D=A",   "JMP",   "A=23232", "D",      "A",      "D=D+1",  "A=1",
      "A=0",   "D-A",   "*A,D=0",  "A=*A",   "A=0-A",  "~D-~A",  "D+*A",
      "~A",    "0&~D",  "~*A+~D",  "D",      "A",      "1&~*A",  "~*A",
      "~*A&D", "~D",    "~D+A",    "1-*A",   "D+A",    "D&0",    "D&A",
      "A&0",   "D+~*A", "0&A",     "~D-~*A", "*A",     "1-A",    "~*A+0",
      "~*A+1", "A-D",   "~D&~A",   "0&~A",   "A&~D",   "~*A-~D", "*A+D",
      "1+D",   "A&D",   "0-*A",    "~*A+D",  "*A&1",   "D&~*A",  "~*A&0",
      "~*A&1", "0+~*A", "~D-0",    "~D&0",   "~D&~*A", "1&~A",   "1-D",
      "~A+~D", "D&*A",  "A-~D",    "0-~*A",  "~*A-1",  "*A&0",   "A&1",
      "~A&D",  "D-~*A", "0-~A",    "0&D",    "A+D",    "D-~A",   "*A-1",
      "D-A",   "~A+D",  "~D-*A",   "0+A",    "1-~A",   "D-0",    "A+1",
      "~*A-0", "0+~A",  "D&~A",    "~A-~D",  "~D&A",   "0+D",    "0&*A",
      "~A-1",  "1-~*A", "~D+~*A",  "~D+1",   "D+0",    "~*A&~D", "~A&~D",
      "1+~*A", "A-1",   "~D&*A",   "~D-1",   "*A+~D",  "~A-D",   "A+0",
      "1+~A",  "~A&0",  "~D+*A",   "0-D",    "D-1",    "0&~*A",  "D-*A",
      "~A-0",  "~*A-D", "1+*A",    "~D-A",   "0-~D",   "0+*A",   "*A+0",
      "A+~D",  "0-A",   "*A-~D",   "D+~A",   "1+A",    "~A+0",   "1+~D",
      "~D&1",  "0+~D",  "1&D",     "D&1",    "*A&~D",  "*A+1",   "~A&1",
      "1&A",   "A-0",   "*A-0",    "1&*A",   "~D+0",   "1&~D",   "~A+1"};

  for (const auto &str : strs) {
    std::cout << "Lexing: " << str << std::endl;
    Lexer l(str);

    for (const auto &tok : l.tokens()) {
      std::cout << "[ " << static_cast<int>(tok.type) << ", " << tok.lexeme
                << "]  ";
    }
    std::cout << std::endl;

    Parser p(l.tokens());
  }
  return 0;
}
