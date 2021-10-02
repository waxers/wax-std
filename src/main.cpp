#include <iostream>

#define USE_COLORED_ASSERTIONS
#include <night/test.hpp>
#include <night/alloc.hpp>
#include <night/intdefs.hpp>

wax::i32 main(){
    wax::u8* x = wax::mem::alloc<wax::u8>();
    assert(0b1 == 1);
    assert(9 == 3 * 3);
    assert(true == true);
    assert(true != !false);

    std::cout << std::endl;

    wax::test::finish_tests();
    return 0;
}
