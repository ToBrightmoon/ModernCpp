#include <iostream>
using namespace std;

class A
{
public:
    void func();
    virtual void virFunc();
    int ptr;
};

void A::func() {

}

void A::virFunc() {

}


int main()
{
    auto basePtr = &A::ptr;
    cout << *reinterpret_cast<int*>(&basePtr) << "\n";

    auto VirPtr = &A::virFunc;
    auto func = *(int*)(&VirPtr);
    std::cout<< func <<'\n';

    auto funcPtr = &A::func;
    cout << funcPtr << "\n";
    return 0;
}
