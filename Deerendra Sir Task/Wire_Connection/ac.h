#ifndef AC_H
#define AC_H

#include "wire.h"
#include <iostream>
using namespace std;

class AC
{
private:
    string m_brand;
    string m_colour;
    float m_price;
    Wire* m_wire;

public:
    AC();
    AC(string brand, string colour, float price, Wire* wire);
    ~AC();
    void setWire(Wire *wire);
    void acOn();
};

#endif // AC_H
