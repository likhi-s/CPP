#ifndef PETROLENGINE_H
#define PETROLENGINE_H
#include "engine.h"
#include <iostream>
using namespace std;
class Petrolengine:virtual public Engine
{

public:

    Petrolengine();
    Petrolengine(int a,int b);
    ~Petrolengine();
    // void start();
};

#endif // PETROLENGINE_H
