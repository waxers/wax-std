#pragma once

#include <test/test.hpp>

#define __WAX_PRINT(color, text) color << text << RESET

#define assert(cond) \
    std::cout << "Testing " << __WAX_PRINT(WHITE, #cond) << " in "; \
    std::cout << __WAX_PRINT(WHITE, __FILE__) \
        << '(' << __WAX_PRINT(RED, __LINE__) << "): " \
        << __WAX_PRINT(WHITE, __func__) << "... "; \
    if (cond) { std::cout << __WAX_PRINT(GREEN, "OK") << '\n'; wax::test::okay_count++; } \
    else { std::cout<< __WAX_PRINT(RED, "ERR") << '\n'; wax::test::fail_count++; }

namespace wax {
    namespace test {
        unsigned okay_count = 0, fail_count = 0;

        void finish_tests() {
            if (fail_count + okay_count == 0) return;

            std::cout << WHITE << "Tests finisheds! " << RESET << "Results:\n";
            std::cout << __WAX_PRINT(GREEN, " Okay: ") << okay_count << " | " << __WAX_PRINT(RED, "Fail: ") << fail_count << '\n';
            std::cout << __WAX_PRINT(WHITE, " Success rate: ") << (int)((float)okay_count / (fail_count + okay_count) * 100) << "%\n";
        }
    }
}
