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

        char operator[](usize index_);

        operator const char*();
        
        operator char();

    private:
        const char* str;
    };

    String operator+(String str1, const char* str2);

    String operator+(const char* str1, String str2);

    String operator+(String str1, String str2);
}