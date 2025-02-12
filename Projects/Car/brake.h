#ifndef BRAKE_H
#define BRAKE_H
#include <iostream>
using namespace std;
#include "wheel.h"
class Brake
{
    string type;
    Wheel *m_wheel;
public:
    Brake();
    ~Brake();
    void applyBreak(Wheel *w);
};

#endif // BRAKE_H
