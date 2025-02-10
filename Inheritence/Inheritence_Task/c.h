#ifndef C_H
#define C_H
#include "a.h"

class C:virtual public A
{
public:
    int m_c;
    C();
    ~C();
    void checkc();
    void display();


};

#endif // C_H
