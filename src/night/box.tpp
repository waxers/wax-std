namespace wax {

template <class T> Box<T>::Box() : raw_ptr(NULL) {}
template <class T> Box<T>::Box(T *raw_ptr) : raw_ptr(raw_ptr) {}
template <class T> Box<T>::Box(const Box<T> &box) : raw_ptr(box.leak()) {}

template <class T> T *Box<T>::leak() const {
    T *old = raw_ptr;
    raw_ptr = NULL;
    return old;
}

template <class T> Box<T> Box<T>::operator=(T &raw_ptr) { return Box(raw_ptr); }

template <class T> Box<T> Box<T>::operator=(Box<T> &box) {
    return Box(box.leak());
}

template <class T> T &Box<T>::get(const usize indx) { return raw_ptr[indx]; }

template <class T> T &Box<T>::operator*() { return *raw_ptr; }

template <class T> T &Box<T>::operator->() { return *raw_ptr; }

template <class T> Box<T>::~Box() {
    if (raw_ptr != NULL) {
        mem::free(raw_ptr);
    }
}
} // namespace wax
