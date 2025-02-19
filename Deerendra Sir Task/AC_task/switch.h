#ifndef SWITCH_H
#define SWITCH_H
#include "polycab.h"
#include "finolex.h"
#include "ac.h"
#include <iostream>
using namespace std;

class Switch
{
    string m_colour;
    string m_state;
    string m_brand;
    string m_name;
    int m_price;
    Polycab* m_polycabwire;
    Finolex *m_finolexwire;

public:
    Switch();
    ~Switch();
    void pinit(Polycab* polycabwire);
    void finit(Finolex* finolexwire);
    void switchOn();
};

#endif // SWITCH_H

