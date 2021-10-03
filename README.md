# Wiki

### Output
> Diferente do `wax::print()`, `wax::println()` apresenta quebra de linha no final da impressão
```cpp
#include <night/string.hpp>
#include <night/io.hpp>

int main() {
    wax::println((short)10, (int)10, (long)10, (double)10, (float)10);
    wax::println((uint8_t)10, (uint16_t)10, (uint32_t)10, (uint64_t)10, (uintmax_t)10);
    wax::println((int8_t)10, (int16_t)10, (int32_t)10, (int64_t)10, (intmax_t)10);
    wax::println(wax::String("10"), "10", '1');
    wax::println(true, false);
}
```


> Sobrecarga de Output para classes
```cpp
#include <night/string.hpp>
#include <night/io.hpp>

class Exemple {
public:
    int aInt = 10;
    char aChar = 'b';
};

void operator<<(wax::OStream cout, Exemple ex) {
    wax::println("a int: ", ex.aInt);
    wax::println("a char: ", ex.aChar);
}

int main() {
    Exemple ex;
    wax::print(ex);
}
```
----
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
