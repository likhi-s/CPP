#ifndef LIGHT_H
#define LIGHT_H
#include <iostream>
using namespace std;
#include "wire.h"

class Wire;
class Light
{
public:
    Light();
    Light(string colour, float price, string brand);
    Light(const Light &obj);
    ~Light();

    void operator = (Light obj);
    void setWire(Wire *wire);
    void lightOn();


private:
    string m_colour;
    float m_price;
    string m_brand;
    Wire *m_wire;
};

#endif // LIGHT_H

