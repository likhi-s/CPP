#ifndef POLYCAB_H
#define POLYCAB_H
#include <iostream>
using namespace std;
#include "wire.h"

class Polycab:public Wire
{
private:
    int *c;

public:
    Polycab();
    ~Polycab();

};

#endif // POLYCAB_H
