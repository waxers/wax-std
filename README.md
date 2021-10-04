# Wiki

### Output
> Uso do wax::print e wax::println
```cpp
#include <night/string.hpp>
#include <night/io.hpp>

int main() {
    wax::print(1, 2, 3, 4, 5);
    wax::print(6, 7, 8, 9, 10);
    //output: 012345678910

    wax::println(1, 2, 3, 4, 5);
    wax::println(6, 7, 8, 9, 10);
    //output: 1 2 3 4 5
    //        6 7 8 9 10
}
```

> Sobrecarga de Output para classes:
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
