#include <iostream>
using namespace std;

struct X
{
public:
   void f() & { cout << "左值" << "\n";};

   void f() && { cout << "右值" << "\n";};

};


int main()
{
    X x2 = X();
    x2.f();

    std::move(x2).f()
;    return 0;
}

