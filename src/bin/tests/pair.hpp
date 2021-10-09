#include <night/io.hpp>
#include <night/pair.hpp>
#include <night/string.hpp>

namespace tests {
void pair() {

  wax::Pair<float, float> pair7(1.1f, 2.2f);
  test(pair7 == wax::MakePair(1.1f, 2.2f));

  wax::Pair<float, float> pair8(3.3f, 4.4f);
  test(pair7 != pair8);

  test(pair8.first == 3.3f);
  test(pair8.second == 4.4f);
}
} // namespace tests
