#include "string.hpp"

namespace wax {
    String::String() {
        this->str = "";
    }

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

    char String::operator[](usize index_) {
        if (index_ > this->size()) {
            //fazer um cabeçalho com escape codes*
            fprintf(stderr, "\033[31merror:\033[0m the requested index \033[1mexceeds the maximum index\033[0m of this string:\n");
            fprintf(stderr, "\033[31m|--\033[0m\033[1m max index: %i\n\033[0m", size()-1);
            fprintf(stderr, "\033[31m|--\033[0m\033[1m index requested: %i\n\033[0m", index_);
            exit(-1);
        }
        return str[index_];
    }

    String::operator const char*() {
        return this->str;
    }

    String::operator char() {
        if (this->size() != 1) {
            fprintf(stderr, "\033[31merror:\033[0m trying to transform the string '%s' \033[1mwith %i characters\033[0m to a \033[1mchar\033[0m\n", this->c_str(), this->size());
            exit(-1);
        }
        return this->str[0];
    }
}