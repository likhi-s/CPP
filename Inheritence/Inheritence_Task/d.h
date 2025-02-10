#ifndef D_H
#define D_H
#include "b.h"
#include "c.h"

class D:public B,public C
{
public:
    int m_d;
    D();
    ~D();
    void checkd();
    void display();


};

#endif // D_H
