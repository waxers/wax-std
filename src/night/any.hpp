#pragma once

namespace wax {
struct Any {
    Any() {}

    template <class T> Any(const T &variable_) {
        delete static_cast<char *>(raw_ptr);
        raw_ptr = new T(variable_);
    }

    template <class T> void operator=(const T &variable_) {
        delete static_cast<char *>(raw_ptr);
        raw_ptr = new T(variable_);
    }

    template <class T> T get() { return *static_cast<T *>(raw_ptr); }

    ~Any() { delete static_cast<char *>(raw_ptr); }

    void *raw_ptr = new char(0);
};
} // namespace wax