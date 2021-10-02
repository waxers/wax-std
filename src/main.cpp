#include <iostream>

#define USE_COLORED_ASSERTIONS
#include "night/test.hpp"


int main(){
        assert(0b1 == 1);
        assert(9 == 3 * 3);
        assert(true == true);
        assert(true != !false);

        std::cout << std::endl;

        wax::test::finish_tests();
	return 0;
}
