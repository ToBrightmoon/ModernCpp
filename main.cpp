#include <iostream>
using namespace std;

struct X
{
public:
    X()
    {
        cout << "默认构造" << "\n";
    }
    X(const X&)
    {
        cout << "拷贝构造" << "\n";
    }

    X(X&& x)
    {
        cout << "移动构造" << "\n";
    }
};


int main()
{
//    X();
//    X x = move(X());
    X x2 = X();
    return 0;
}

