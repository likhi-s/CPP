#ifndef A_H
#define A_H
#include <iostream>
using namespace std;
#include "b.h"
class A
{
    int m_a;
    string m_b;
public:
    A();
    ~A();
    void fun1();
    // friend class B;
    friend void B::fun2(A &a);
};

#endif // A_H
