#include "io.hpp"

namespace wax {
    void OStream::operator<<(wax::String ostream) {
        printf(ostream.c_str());
    }
    void OStream::operator<<(const char* ostream) {
        printf(ostream);
    }
    void OStream::operator<<(char ostream) {
        printf("%c", ostream);
    }
    void OStream::operator<<(int ostream) {
        printf("%i", ostream);
    }
    void OStream::operator<<(unsigned ostream) {
        printf("%i", ostream);
    }
    void OStream::operator<<(short ostream) {
        printf("%i", ostream);
    }
    void OStream::operator<<(unsigned short ostream) {
        printf("%i", ostream);
    }
    void OStream::operator<<(long ostream) {
        printf("%ld", ostream);
    }
    void OStream::operator<<(unsigned long ostream) {
        printf("%lu", ostream);
    }
    void OStream::operator<<(float ostream) {
        printf("%f", ostream);
    }
    void OStream::operator<<(double ostream) {
        printf("%f", ostream);
    }
    void OStream::operator<<(bool ostream) {
        ostream ? printf("true") : printf("false");
    }
}