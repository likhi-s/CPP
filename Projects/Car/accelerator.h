#ifndef ACCELERATOR_H
#define ACCELERATOR_H
#include "wheel.h"
#include <iostream>
using namespace std;
class Accelerator
{
    int speed;
    Wheel *m_wheel;

public:
    Accelerator() ;
    ~Accelerator();
    void speedUp(Wheel *w);
    void speedDown();
};

#endif // ACCELERATOR_H
