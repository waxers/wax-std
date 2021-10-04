#include <night/string.hpp>
#include <night/io.hpp>

namespace tests {
    void print_println() {
        wax::print(1, 2, 3, 4, 5);
        wax::print(6, 7, 8, 9, 10);
        //output: 012345678910

        wax::println(1, 2, 3, 4, 5);
        wax::println(6, 7, 8, 9, 10);
        //output: 1 2 3 4 5
        //        6 7 8 9 10

        wax::println((short)10, (int)10, (long)10, (double)10, (float)10);
        wax::println((uint8_t)10, (uint16_t)10, (uint32_t)10, (uint64_t)10, (uintmax_t)10);
        wax::println((int8_t)10, (int16_t)10, (int32_t)10, (int64_t)10, (intmax_t)10);
        wax::println(wax::String("10"), "10", '1');
        wax::println(true, false);
    }
}