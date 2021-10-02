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
        void finish_tests();
    }
}
