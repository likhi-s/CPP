#ifndef FINOLEX_H
#define FINOLEX_H
#include <iostream>
using namespace std;

class AC;

class Finolex
{
    AC* acptr;
public:
    Finolex();
    ~Finolex();
    void setMe(AC* ac);
    void wireOn();

};

#endif // FINOLEX_H
