#include <iostream>

#define USE_COLORED_ASSERTIONS
#include <test/test.hpp>
#include <core/mem/alloc.hpp>
#include <core/sys/intdefs.hpp>
#include <night/string.hpp>

#include "tests/string.hpp"
#include "tests/box.hpp"

wax::i32 main(){
        tests::string(); // FIXME: Memory Leak em toda chamada do operador `+`
        tests::box();

        std::cout << std::endl;

        wax::test::finish_tests();
    return 0;
} 
