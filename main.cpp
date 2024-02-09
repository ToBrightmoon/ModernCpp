#include <iostream>
#include <vector>
using namespace std;


//template <typename ...Args>
//void Print(Args... args)
//{
//    Print(args...);
//}

template <typename T>
void Print(T a)
{
    cout << a << "\n";
}

template <typename T,typename ...Args>
void Print(T a, Args... args)
{
    cout << a << " ";
    Print(args...);
}



int main()
{
    Print(1,2,3,4,5);
    return 0;
}

