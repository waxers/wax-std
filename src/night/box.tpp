namespace wax {

template <class T> Box<T>::Box(T *raw_ptr) : raw_ptr(raw_ptr) {}

template <class T> T &Box<T>::leak() {
  T *old = raw_ptr;
  raw_ptr = NULL;
  return old;
}

template <class T> Box<T> Box<T>::operator=(T &raw_ptr) { return Box(raw_ptr); }

template <class T> Box<T> Box<T>::operator=(Box &box) {
  return Box(box.leak());
}

template <class T> Box<T>::operator T &() const { return raw_ptr; }

template <class T> T &Box<T>::get() const { return raw_ptr; }

template <class T> T &Box<T>::operator->() const { return raw_ptr; }

template <class T> Box<T>::~Box() {
  if (raw_ptr != NULL) {
    mem::free(raw_ptr);
  }
}
} // namespace wax
