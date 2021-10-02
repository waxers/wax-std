#include <core/sys/intdefs.hpp>
#include <cstdlib>

namespace wax {
    namespace mem {
        template<class T>
        T* alloc(usize count) {
            return (T*) malloc(sizeof(T) * count);
        }

        template<class T>
        T* realloc(T& ptr, usize new_count) {
            return (T*) realloc(&ptr, new_count);
        }

        template<class T>
        void free(T* ptr) {
            free(ptr);
        }
    }
}
