#include <iostream>
using namespace std;

struct X
{
    int x = 1;
    int y = 2;
};


int main()
{
     X x;
     auto& [a,b] = x;

     cout << a << " " << b << "\n";
     a = 1;
     b = 3;
     cout << x.x << " " << x.y;
;    return 0;
}

