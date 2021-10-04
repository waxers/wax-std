# Wiki

### Pair
> Uso do wax::Pair:

```cpp
#include <night/string.hpp>
#include <night/io.hpp>
#include <night/pair.hpp>

wax::i32 main(){

    //declarations
    wax::Pair<char, bool> pair1('a', true);
    wax::Pair<int, wax::String> pair2(2, "text");

    wax::Pair<int, wax::String> pair3(pair2);
    wax::Pair<float, float> pair4 = wax::MakePair(2.5f, 5.8f);

    //get items
    wax::Pair<wax::String, wax::String> pair5("text1", "text2");
    wax::String text1 = pair5.first;
    wax::String text2 = pair5.second;

    //print
    wax::Pair<int, int> pair6(5, 10);
    wax::println(pair6.first, pair6.second); //output:  5 10
    wax::println(pair6); //output:  first: 5 | second: 10

    //operators == !=
    wax::Pair<float, float> pair7(1.1f, 2.2f);
    wax::println(pair7 == wax::MakePair(1.1f, 2.2f)); //output:  true

    wax::Pair<float, float> pair8(3.3f, 4.4f);
    wax::println(pair7 != pair8); //output:  true

    return 0;
} 
```

----

### Output
> Uso do wax::print e wax::println:
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
