#pragma once

#include <core/alloc.hpp>
#include <core/intdefs.hpp>

namespace wax {
template <class T> struct Box {
  mutable T *raw_ptr;

  Box();
  Box(T *raw_ptr);
  Box(const Box<T> &box);

  T *leak() const;

  Box<T> operator=(T &raw_ptr);
  Box<T> operator=(Box<T> &box);

  T &get(const usize indx = 0);
  T &operator*();
  T &operator->();

  ~Box();
};
} // namespace wax

#include "box.tpp"
