#include <night/string.hpp>
#include <night/io.hpp>
#include <night/pair.hpp>

namespace tests {
    void pair() {

        wax::Pair<float, float> pair7(1.1f, 2.2f);
        assert(pair7 == wax::MakePair(1.1f, 2.2f));

        wax::Pair<float, float> pair8(3.3f, 4.4f);
        assert(pair7 != pair8);

        assert(pair8.first == 3.3f);
        assert(pair8.second == 4.4f);
    }
}