#include <test/test.hpp>
#include <night/string.hpp>
#include <night/any.hpp>

namespace tests {

    void my_func(Any addresses[]) {
        addresses[0] = 10;
        addresses[1] = 'y';
        addresses[2] = true;
        addresses[3] = wax::String("text");
    }

    void any() {
        wax::Any addresses[4];
        my_func(addresses);

        assert(addresses[0].get<int>() == 10);
        assert(addresses[1].get<char>() == 'y');
        assert(addresses[2].get<bool>() == true);
        assert(addresses[3].get<wax::String>() == "text");
    }
}