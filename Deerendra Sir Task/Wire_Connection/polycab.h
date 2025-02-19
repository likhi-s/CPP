#ifndef POLYCAB_H
#define POLYCAB_H
#include <iostream>
using namespace std;
#include "wire.h"
#include "ac.h"


class Polycab:public Wire
{    AC* acptr;


public:
    Polycab();
    ~Polycab();
    void setMe(AC *ac);
    void wireOn();
};

#endif // POLYCAB_H
