#pragma once

#include <core/mem/alloc.hpp>

namespace wax {
    template<class T>
    struct Box {
        T* raw_ptr;

        Box(T* raw_ptr);

        T& leak();

        Box<T> operator=(T& raw_ptr); 
        Box<T> operator=(Box<T>& box);

        T& get();

        ~Box();
    };
}

#include "box.tpp"
