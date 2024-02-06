#include <iostream>
using namespace std;



int main()
{
    auto p = [num = 0](){return 0;};
    auto q = [](){return 0;};
    auto p_ = []<typename T>(T a){cout << a << "\n";};
    p_(10);
    p_("str");
    cout << sizeof p << "\n";  // 4
    cout << sizeof q << "\n";  // 1
    return 0;
}
