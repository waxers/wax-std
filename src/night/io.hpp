#pragma once
#include <night/string.hpp>

namespace wax {
struct OStream {
  void operator<<(String ostream);
  void operator<<(const char *ostream);
  void operator<<(char ostream);
  void operator<<(int ostream);
  void operator<<(unsigned ostream);
  void operator<<(short ostream);
  void operator<<(unsigned short ostream);
  void operator<<(long ostream);
  void operator<<(unsigned long ostream);
  void operator<<(float ostream);
  void operator<<(double ostream);
  void operator<<(bool ostream);
};
OStream cout;

void print() {}
template <typename T, typename... Args> void print(T arg1, Args... args) {
  wax::cout << arg1;
  wax::print(args...);
}

template <typename T> void println(T arg) {
  wax::cout << arg;
  wax::cout << "\n";
}

template <typename T, typename... Args> void println(T arg1, Args... args) {
  wax::cout << arg1;
  wax::cout << " ";
  wax::println(args...);
}
} // namespace wax
