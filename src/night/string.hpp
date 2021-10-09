#pragma once

#include <cstring>
#include <stdio.h>
#include <stdlib.h>

#include <core/intdefs.hpp>
#include <core/alloc.hpp>

namespace wax {
class String {
public:
  String();

  String(const char *str);

  String(const String &str);

  const char *c_str() const;

  usize size() const;

  void operator=(const char *str);
  void operator=(String str);

  void operator+=(const char *str);
  void operator+=(String str);

  char operator[](usize index_);

  operator const char *() const;

  operator char() const;

private:
  const char *str;
};

String operator+(String str1, const char *str2);
String operator+(const char *str1, String str2);
String operator+(String str1, String str2);

bool operator==(String str1, String str2);
bool operator==(String str1, const char *str2);
bool operator==(const char *str1, String str2);

bool operator!=(String str1, String str2);
bool operator!=(String str1, const char *str2);
bool operator!=(const char *str1, String str2);

} // namespace wax
