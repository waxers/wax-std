# Wiki

### Strings
> Trabalhando com cadeias de caracter de uma maneira fácil
```cpp
#include <night/string.hpp>
#include <iostream>

int main() {

    //declarations
    wax::String text1;
    wax::String text2 = "text";
    wax::String text3 = text2;
    wax::String text4 = wax::String("text") + wax::String(" more text");
    
    //operators +, += and =
    text1 = text2 + " more text";
    text2 += " more text";
    text3 = text1 + " and " + text2;

    //conversions to 'char'
    wax::String b_character = "b";
    char letter = (char)b_character;

    //conversions to 'const char*'
    const char* _c_str  = (const char*)text1;
    const char* _c_str2 = text1.c_str(); //'(const char*)obj' and 'obj.c_str()' are equals

    //get size
    int size = text1.size();

    //get a character
    wax::String abc = "abc";
    char a = abc[0];
    char b = abc[1];
    char c = abc[2];

}
