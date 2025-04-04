#include "c.h"
#include <iostream>

using namespace std;
C::C()
{
    cout<<"c con "<<endl;
}

C::~C()
{
    cout<<"c des "<<endl;
}

void C::cfun()
{
    this->funb();
    this->fun();
}

// void C::fun()
// {
//     cout<<"func C"<<endl;
// }
