#include <iostream>
using namespace std;

void func()
{
    cout << "hello" << "\n";
}

void g() noexcept
{
    cout << "hello" << "\n";
}

void h() noexcept(true)
{
    cout << "hello" << "\n";
}


int main()
{
    cout << std::boolalpha << noexcept(func()) << "\n";
    cout << std::boolalpha << noexcept(g()) << "\n";
    cout << std::boolalpha << noexcept(h()) << "\n";
    auto gg = h;
    return 0;
}
