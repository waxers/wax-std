#include <night/string.hpp>
#include <night/io.hpp>
#include <night/pair.hpp>

namespace tests {
    void pair() {
        //declarations
        wax::Pair<char, bool> pair1('a', true);
        wax::Pair<int, wax::String> pair2(2, "text");

        wax::Pair<int, wax::String> pair3(pair2);
        wax::Pair<float, float> pair4 = wax::MakePair(2.5f, 5.8f);

        //get items
        wax::Pair<wax::String, wax::String> pair5("text1", "text2");
        wax::String text1 = pair5.first;
        wax::String text2 = pair5.second;

        //print
        wax::Pair<int, int> pair6(5, 10);
        wax::println(pair6.first, pair6.second); //output:  5 10
        wax::println(pair6); //output:  first: 5 | second: 10

        //operators == !=
        wax::Pair<float, float> pair7(1.1f, 2.2f);
        wax::println(pair7 == wax::MakePair(1.1f, 2.2f)); //output:  true

        wax::Pair<float, float> pair8(3.3f, 4.4f);
        wax::println(pair7 != pair8); //output:  true
    }
}