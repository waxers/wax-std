#include <stdio.h>
#include <stdlib.h>
#include <cstring>

#include <core/sys/intdefs.hpp>

namespace wax {
    class String {
    public:
        String(const char* str);

        const char* c_str();

        usize size();

        void operator=(const char* str);

        void operator=(String str);

        void operator+=(const char* str);

        void operator+=(String str);

    private:
        const char* str;
    };
}
