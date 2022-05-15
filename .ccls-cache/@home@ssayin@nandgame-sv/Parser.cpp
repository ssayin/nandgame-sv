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
