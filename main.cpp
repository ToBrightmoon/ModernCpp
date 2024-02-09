#include <iostream>
#include <vector>
using namespace std;

template <typename... Args>
int SubLeft(Args... args)
{
    return ( ... - args);
}

template <typename... Args>
int SubRight(Args... args)
{
    return ( args - ...);
}

template <typename... Args>
int SubLeftMul(Args... args)
{
    return ( 10 - ... - args);
}

template <typename... Args>
int SubRightMul(Args... args)
{
    return ( args - ... - 10);
}

int main()
{
    cout << SubLeft(1,2,4,5) << "\n"; // -10
    cout << SubRight(1,2,4,5) << "\n"; // -2
    cout << SubLeftMul(1,3,4,0) << "\n"; // -2
    cout << SubRightMul(1,2,4,5) << "\n"; // -2
    return 0;
}

