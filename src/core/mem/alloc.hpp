#pragma once

#include <stdlib.h>
#include <core/sys/intdefs.hpp>
#include <iostream>

namespace wax {
    namespace mem {
        template <class T>
        T* alloc(usize count = 1);

        template <class T>
        T* realloc(T& ptr, usize new_count);

        template <class T>
        void free(T& ptr);
    }
}

#include "alloc.tpp"
