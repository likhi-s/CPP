#ifndef HYBRID_H
#define HYBRID_H
#include "petrolengine.h"
#include "cngengine.h"
#include <iostream>
using namespace std;

class Hybrid:public Petrolengine,public Cngengine
{

public:
    Hybrid();
    Hybrid(int a,int b);
    ~Hybrid();
    // void start();
};

#endif // HYBRID_H
