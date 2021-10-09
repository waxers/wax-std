#include "string.hpp"

namespace wax {
String::String() { this->str = ""; }

String::String(const char *str) { this->str = str; }

String::String(const String &str) { this->str = (const char *)str; }

const char *String::c_str() const { return str; }

usize String::size() const { return (usize)strlen(str); }

void String::operator=(const char *str) { this->str = str; }

void String::operator=(String str) { this->str = str.c_str(); }

String operator+(String str1, const char *str2) {
    int total_size = 1 + str1.size() + strlen(str2);

    // cocatenate
    char *str3 = wax::mem::alloc<char>(total_size);
    strcpy(str3, str1.c_str());
    strcat(str3, str2);

    // copy
    char final_str[total_size];
    for (int i = 0; i < total_size; i++) {
        final_str[i] = str3[i];
    }

    // delete trash and return
    free(str3);
    return String(final_str);
}

String operator+(const char *str1, String str2) {
    return String(str1) + str2.c_str();
}

String operator+(String str1, String str2) { return str1 + str2.c_str(); }

void String::operator+=(const char *str) {
    this->str = String(*this + str).c_str();
}

void String::operator+=(String str) { this->str = String(*this + str).c_str(); }

bool operator==(String str1, String str2) {
    return strcmp((const char *)str1, (const char *)str2) == 0;
}

bool operator==(String str1, const char *str2) { return str1 == String(str2); }

bool operator==(const char *str1, String str2) { return String(str1) == str2; }

bool operator!=(String str1, String str2) { return (str1 == str2) == false; }

bool operator!=(String str1, const char *str2) { return str1 != String(str2); }

bool operator!=(const char *str1, String str2) { return String(str1) != str2; }

char String::operator[](usize index_) {
    if (index_ > this->size()) {
        // fazer um cabeçalho com escape codes*
        fprintf(stderr,
                "\033[31merror:\033[0m the requested index \033[1mexceeds the "
                "maximum index\033[0m of this string:\n");
        fprintf(stderr, "\033[31m|--\033[0m\033[1m max index: %i\n\033[0m",
                size() - 1);
        fprintf(stderr,
                "\033[31m|--\033[0m\033[1m index requested: %i\n\033[0m",
                index_);
        exit(-1);
    }
    return str[index_];
}

String::operator const char *() const { return this->str; }

String::operator char() const {
    if (this->size() != 1) {
        fprintf(stderr,
                "\033[31merror:\033[0m trying to transform the string '%s' "
                "\033[1mwith %i characters\033[0m to a \033[1mchar\033[0m\n",
                this->c_str(), this->size());
        exit(-1);
    }
    return this->str[0];
}

} // namespace wax
