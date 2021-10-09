#include <iostream>
#include <night/string.hpp>
#include <test/test.hpp>

namespace tests {
void string() {
  // testing string's operators == and !=
  test(wax::String("text") == wax::String("text"));
  test(wax::String("text") != wax::String("...."));
  test(wax::String("text") == "text");
  test("text" == wax::String("text"));
  test(wax::String("text") != "....");
  test("text" != wax::String("..."));

  // testing string's operator +
  test(wax::String("text") == wax::String("te") + wax::String("xt"));
  test(wax::String("text") == wax::String("te") + "xt");
  test(wax::String("text") == "te" + wax::String("xt"));
  test(wax::String("te") + wax::String("xt") == wax::String("text"));
  test(wax::String("te") + "xt" == wax::String("text"));
  test("te" + wax::String("xt") == wax::String("text"));

  // testing string's initializations
  wax::String text1 = "text";
  test(text1 == "text");

  wax::String text2 = text1;
  test(text2 == "text");

  wax::String text3;
  text3 = "text";
  test(text3 == "text");

  // testing string's transformations
  test(strcmp(text1.c_str(), "text") == 0);
  test(strcmp((const char *)text1, "text") == 0);
  wax::String char1 = "t";
  test((char)char1 == 't');

  // testing string's operator []
  wax::String abc = "abc";
  test(abc[0] == 'a');
  test(abc[1] == 'b');
  test(abc[2] == 'c');
}
} // namespace tests
