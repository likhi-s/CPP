#ifndef FINOLEX_H
#define FINOLEX_H
#include <iostream>
using namespace std;
#include "wire.h"

class Finolex:public Wire
{
private:
    int *a;
public:
    Finolex();
    ~Finolex();
};

#endif // FINOLEX_H
