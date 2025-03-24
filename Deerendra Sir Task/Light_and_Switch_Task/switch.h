#ifndef SWITCH_H
#define SWITCH_H
#include <iostream>
using namespace std;
#include "wire.h"

class Switch
{
public:
    Switch();
    Switch(string colour, string brand, float price, Wire *wire1, Wire *wire2, Wire *wire3);
    //Switch(Wire *wire1, Wire *wire2, Wire *wire3);
    ~Switch();

    void switchOn();

private:
    string m_colour;
    string m_brand;
    float m_price;
    Wire *m_wire1,*m_wire2,*m_wire3;
};

#endif // SWITCH_H
