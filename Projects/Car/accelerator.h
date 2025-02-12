#ifndef ACCELERATOR_H
#define ACCELERATOR_H
#include <iostream>
using namespace std;
class Accelerator
{
    int speed;
public:
    Accelerator() ;
    ~Accelerator();
    void speedUp();
    void speedDown();
};

#endif // ACCELERATOR_H
