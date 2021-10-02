#include "string.hpp"

namespace wax {
    String::String(const char* str) {
        this->str = str;
    }

    const char* String::c_str() {
        return str;
    }

    usize String::size() {
        return (usize)strlen(str);
    }

    void String::operator=(const char* str) {
        this->str = str;
    }

    void String::operator=(String str) {
        this->str = str.c_str();
    }

    String operator+(String str1, const char* str2) {
        char* str3 = (char*) malloc(1 + str1.size() + strlen(str2));
        strcpy(str3, str1.c_str());
        strcat(str3, str2);

        return String(str3);
    }

    String operator+(const char* str1, String str2) {
        return str2 + str1;
    }


    String operator+(String str1, String str2) {
        return str1 + str2.c_str();
    }

    void String::operator+=(const char* str) {
        this->str = String(*this + str).c_str();
    }

    void String::operator+=(String str) {
        this->str = String(*this + str).c_str();
    }
}