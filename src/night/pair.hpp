#include <night/string.hpp>
#include <night/io.hpp>

namespace wax {
    template <class T1, class T2>
    class Pair {
    public:

        Pair(T1 first, T2 second): first(first), second(second) {}

        Pair(const Pair<T1, T2>& pair): first(pair.first), second(pair.second) {}

        void operator=(Pair pair) {
            this->first = pair.first;
            this->second = pair.second;
        }

        T1 first;
        T2 second;
    };

    template <class T1, class T2>
    Pair<T1, T2> MakePair(T1 first, T2 second) {
        return Pair<T1, T2>(first, second);
    }

    template <class T1, class T2>
    void operator<<(wax::OStream, Pair<T1, T2> pair) {
        println("first:", pair.first, "| second:", pair.second);
    }

    template <class T1, class T2>
    bool operator==(Pair<T1, T2> pair1, Pair<T1, T2> pair2) {
        return ((pair1.first == pair2.first) && (pair1.second == pair2.second));
    }

    template <class T1, class T2>
    bool operator!=(Pair<T1, T2> pair1, Pair<T1, T2> pair2) {
        return (pair1 == pair2) == false;
    }
}
