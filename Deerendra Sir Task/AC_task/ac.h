#ifndef AC_H
#define AC_H
#include "polycab.h"
#include "finolex.h"
#include <iostream>
using namespace std;

class AC
{
    string m_brand;
    string m_colour;
    float m_price;
    Polycab* m_polycabwire;
    Finolex* m_finolexwire;


public:
    AC();
    AC(string brand, string colour, float price);
    ~AC();
    void setPolycabWire(Polycab* polycabwire);
    void setFinolexWire(Finolex* finolexwire);
    void acOn();
};

#endif // AC_H

