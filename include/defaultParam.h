

#ifndef MODERNCPPLEARN_DEFAULTPARAM_H
#define MODERNCPPLEARN_DEFAULTPARAM_H
#include <iostream>

void f(int,int,int = 9);
void f(int,int=8,int);

void f(int a = 8,int b,int c)
{
    std::cout << a << " " << b << " " << c << "\n";
}

class A
{
public:
     A (int a,int b=2);
};

A::A(int a=1,int b)
{

}

#endif //MODERNCPPLEARN_DEFAULTPARAM_H
