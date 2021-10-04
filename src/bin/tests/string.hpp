#include <iostream>
#include <test/test.hpp>
#include <night/string.hpp>

namespace tests {
    void string() {
        //testing string's operators == and !=
        assert(wax::String("text") == wax::String("text"));
        assert(wax::String("text") != wax::String("...."));
        assert(wax::String("text") == "text");
        assert("text" == wax::String("text"));
        assert(wax::String("text") != "....");
        assert("text" != wax::String("..."));

        //testing string's operator +
        assert(wax::String("text") == wax::String("te") + wax::String("xt"));
        assert(wax::String("text") == wax::String("te") + "xt");
        assert(wax::String("text") == "te" + wax::String("xt"));
        assert(wax::String("te") + wax::String("xt") == wax::String("text"));
        assert(wax::String("te") + "xt" == wax::String("text"));
        assert("te" + wax::String("xt") == wax::String("text"));

        //testing string's initializations
        wax::String text1 = "text";
        assert(text1 == "text");

        wax::String text2 = text1;
        assert(text2 == "text");

        wax::String text3;
        text3 = "text";
        assert(text3 == "text");

        //testing string's transformations
        assert(strcmp(text1.c_str(), "text") == 0);
        assert(strcmp((const char*)text1, "text") == 0);
        wax::String char1 = "t"; assert((char)char1 == 't');

        //testing string's operator []
        wax::String abc = "abc";
        assert(abc[0] == 'a');
        assert(abc[1] == 'b');
        assert(abc[2] == 'c');
    }
}
