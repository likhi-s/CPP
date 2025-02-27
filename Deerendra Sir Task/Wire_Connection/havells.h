#ifndef HAVELLS_H
#define HAVELLS_H
#include <iostream>
using namespace std;
#include "wire.h"
#include "ac.h"


class Havells:public Wire
{
    private:
    AC* acptr;

public:
    Havells();
    ~Havells();
    void setMe(AC *ac)  ;
    void wireOn();


};

#endif // HAVELLS_H
