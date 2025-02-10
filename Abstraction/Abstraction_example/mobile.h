#ifndef MOBILE_H
#define MOBILE_H
#include "battery.h"
#include <iostream>
using namespace std;


class Mobile
{
    Battery bobj;

public:
    Mobile();
    ~Mobile();
    void chargeMobile();

};

#endif // MOBILE_H
