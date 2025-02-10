#ifndef CNGENGINE_H
#define CNGENGINE_H
#include "engine.h"
#include <iostream>
using namespace std;

class Cngengine:virtual public Engine
{

public:
    Cngengine();
    Cngengine(int a, int b);
    ~Cngengine();
    // void start();
};

#endif // CNGENGINE_H
