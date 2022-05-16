find_package(BISON)
find_package(FLEX)

bison_target(
  parser nandgame.yy
  ${CMAKE_CURRENT_BINARY_DIR}/parser.cpp
)

flex_target(
  lexer nandgame.ll
  ${CMAKE_CURRENT_BINARY_DIR}/lexer.cpp
)
add_flex_bison_dependency(lexer parser)

include_directories(${CMAKE_CURRENT_BINARY_DIR})
add_executable(
  emulator
  ${BISON_parser_OUTPUTS}
  ${FLEX_lexer_OUTPUTS}
)

