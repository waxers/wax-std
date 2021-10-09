#include <iostream>

#define USE_COLORED_ASSERTIONS
#include <core/mem/alloc.hpp>
#include <core/sys/intdefs.hpp>
#include <night/string.hpp>
#include <test/test.hpp>

#include "tests/any.hpp"
#include "tests/box.hpp"
#include "tests/pair.hpp"
#include "tests/print.hpp"
#include "tests/string.hpp"

wax::i32 main() {
//  tests::string();
  tests::box();
  // tests::print_println();
  tests::pair();
  tests::any();

  std::cout << std::endl;

  wax::test::finish_tests();
  return 0;
}
