#include <iostream>
#include <vector>
using namespace std;

template <typename T,typename Elem>
void f(T a, Elem e)
{
    cout << a << " " << e << "\n";
}


template <typename T>
void f<T,double>(T a, double e)
{
        cout << a << " " << "double: " << e << "\n";
}



int main()
{
    X<int,string>::f(2,"str");
    X<int,double>::f(1,2.0);
    return 0;
}

