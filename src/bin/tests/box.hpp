#include <core/intdefs.hpp>
#include <iostream>
#include <night/box.hpp>
#include <core/alloc.hpp>

using namespace wax;

namespace tests {
void box() {
  {
    Box<u8> box = mem::alloc<u8>(1204);
    Box<u8> other = box;
    // `ptr` não existe mais, todo seu valor foi passado para `other`
  } // `other` tem seu valor liberado aqui
  // aloca 8 `u8`'s dentro de um único owner
  Box<u8> box = mem::alloc<u8>(8);
  // pega o índice `1` a partir do ponteiro base
  box.get(1) = 0;

  // se vazar o conteúdo de um `Box`, é necessário liberar manualmente. Caso contrário ocorrerá Memory Leaks
  u8* ptr = box.leak();
  // comente a linha a seguir caso queira verificar a ocorrência deste aspecto
  wax::mem::free(ptr);
}
} // namespace tests
