#include <iostream>

#define USE_COLORED_ASSERTIONS
#include <core/mem/alloc.hpp>
#include <core/sys/intdefs.hpp>
#include <night/string.hpp>
#include <test/test.hpp>

#include "tests/box.hpp"
#include "tests/pair.hpp"
#include "tests/print.hpp"
#include "tests/string.hpp"

wax::i32 main() {
  tests::string(); // FIXME: Memory Leak em toda chamada do operador `+`
  tests::box();
  // tests::print_println();
  // tests::pair();

  std::cout << std::endl;

  wax::test::finish_tests();
  return 0;
}
