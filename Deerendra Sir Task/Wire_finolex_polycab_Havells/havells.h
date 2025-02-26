#ifndef HAVELLS_H
#define HAVELLS_H
#include <iostream>
using namespace std;
#include "wire.h"

class Havells:public Wire
{
private:
    int *b;
public:
    Havells();
    ~Havells();
};

#endif // HAVELLS_H
