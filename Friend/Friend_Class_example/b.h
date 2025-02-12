#ifndef B_H
#define B_H
// #include "a.h"
#include <iostream>
using namespace std;
class A;
class B
{
public:
    B();
    ~B();
    //A *a = new A;
    void fun2(A &a);
    void fun3();

};

#endif // B_H
