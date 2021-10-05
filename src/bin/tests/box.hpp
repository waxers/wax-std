#include <core/sys/intdefs.hpp>
#include <night/box.hpp>

using namespace wax;

namespace tests {
void box() { Box<u8> ptr = mem::alloc<u8>(); }
} // namespace tests
