#include <iostream>
#include <vector>
using namespace std;

template <class T>
struct X {
    T x;
};

template <class T , template<class Elem> class C = X>
        struct TemplateN
        {
            T y;
            X<T> x;
        };

int main()
{
    TemplateN<int,X> a{};
    return 0;
}

