#ifndef B_H
#define B_H
#include "a.h"

class B:virtual public A
{
public:
    int m_b;
    B();
    ~B();
    void checkb();
    void display();


};

#endif // B_H
