find_package(BISON)
find_package(FLEX)

bison_target(
  parser parser.yy
  ${CMAKE_CURRENT_BINARY_DIR}/parser.cpp
)

flex_target(
  lexer lexer.ll
  ${CMAKE_CURRENT_BINARY_DIR}/lexer.cpp
)

add_flex_bison_dependency(lexer parser)

add_library(
  nandasm
  STATIC
  ${BISON_parser_OUTPUTS}
  ${FLEX_lexer_OUTPUTS}
  driver.cpp
)

target_include_directories(
  nandasm PUBLIC
  "${CMAKE_CURRENT_SOURCE_DIR}"
  "${CMAKE_CURRENT_BINARY_DIR}"
)
