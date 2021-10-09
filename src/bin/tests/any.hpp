#include <night/any.hpp>
#include <night/string.hpp>
#include <test/test.hpp>

namespace tests {

void my_func(wax::Any addresses[]) {
    addresses[0] = 10;
    addresses[1] = 'y';
    addresses[2] = true;
    addresses[3] = wax::String("text");
}

void any() {
    wax::Any addresses[4];
    my_func(addresses);

    test(addresses[0].get<int>() == 10);
    test(addresses[1].get<char>() == 'y');
    test(addresses[2].get<bool>() == true);
    test(addresses[3].get<wax::String>() == "text");
}
} // namespace tests
