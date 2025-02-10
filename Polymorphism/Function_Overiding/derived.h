#ifndef DERIVED_H
#define DERIVED_H
#include "base.h"
#include <iostream>

using namespace std;

class Derived:public Base
{
public:
    Derived();
    ~Derived();
    void print(int a ,int b);

};

#endif // DERIVED_H
