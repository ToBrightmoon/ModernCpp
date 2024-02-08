#include <iostream>
#include <vector>
using namespace std;

struct X
{
    int x = 1;
    int y = 2;
};


int main()
{
    vector vec(10,0);
    cout << vec.size();
    return 0;
}

