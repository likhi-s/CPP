#include <iostream>
#include "derived.h"
using namespace std;


int main()
{
    Base *baseptr;
    Derived  derivedobj;
    baseptr = &derivedobj;
    baseptr->print(30,3);



    //derivedobj.print(3,3);
    // Derived derivedobj;
    // derivedobj.print(10,10);
    // derivedobj.Base::print(2,10);

    return 0;
}
