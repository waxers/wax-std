#include <night/box.hpp>
#include <core/sys/intdefs.hpp>

using namespace wax;

namespace tests {
    void box() {
        Box<u8> ptr = mem::alloc<u8>();
    }
}
