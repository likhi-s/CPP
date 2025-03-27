#ifndef SWITCH_H
#define SWITCH_H
#include <iostream>
using namespace std;
#include "wire.h"
#include <vector>

class Switch
{
public:
    Switch();
    Switch(string colour, string brand, float price);

    Switch(const Switch &obj);

    ~Switch();

    void operator =(Switch obj);
    void switchOn();
    void initWire(Wire *wire);
private:
    string m_colour;
    string m_brand;
    float m_price;
    Wire * m_wire;
};

#endif // SWITCH_H

