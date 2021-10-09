#pragma once

#include <iostream>

#if defined(USE_COLORED_ASSERTIONS)
#define WHITE "\u001b[37m\033[1m"
#define RED "\u001b[31m\033[1m"
#define GREEN "\u001b[32m\033[1m"
#define RESET "\u001b[0m\033[0m"
#else
#define RED ""
#define WHITE ""
#define GREEN ""
#define RESET ""
#endif

namespace wax {
namespace test {
void print_test(const char *file, const int line, const char *expr,
                const bool result);
void finish_tests();
} // namespace test
} // namespace wax

#define __WAX_PRINT(color, text) color << text << RESET

#define test(cond) wax::test::print_test(__FILE__, __LINE__, #cond, cond)

namespace wax {
namespace test {
unsigned okay_count = 0, fail_count = 0;

void print_test(const char *file, const int line, const char *expr,
                const bool result) {
    std::cout << __WAX_PRINT(WHITE, expr) << " in " << __WAX_PRINT(WHITE, file)
              << "(" << __WAX_PRINT(RED, line) << ")...";

    if (result) {
        std::cout << __WAX_PRINT(GREEN, "OK") << '\n';
        okay_count++;
    } else {
        std::cout << __WAX_PRINT(RED, "ERR");
        fail_count++;
    }
}

void finish_tests() {
    if (fail_count + okay_count == 0)
        return;

    std::cout << WHITE << "Tests finisheds! " << RESET << "Results:\n";
    std::cout << __WAX_PRINT(GREEN, " Okay: ") << okay_count << " | "
              << __WAX_PRINT(RED, "Fail: ") << fail_count << '\n';
    std::cout << __WAX_PRINT(WHITE, " Success rate: ")
              << (int)((float)okay_count / (fail_count + okay_count) * 100)
              << "%\n";
}
} // namespace test
} // namespace wax
