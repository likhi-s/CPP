#ifndef HAVELLS_H
#define HAVELLS_H
#include <iostream>
using namespace std;

class AC;
class Havells
{
private:
    AC* acptr;

public:
    Havells();
    ~Havells();
    void setMe(AC* ac);
    void wireOn();
};

#endif // HAVELLS_H
