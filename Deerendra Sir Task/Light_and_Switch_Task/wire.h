#ifndef WIRE_H
#define WIRE_H
#include <iostream>
using namespace std;
#include "light.h"
class Light;
class Wire
{
public:
    Wire();
    Wire(float thickness, float length, string colour, string brand, float price, Light *light);
    ~Wire();

    void wireOn();
private:
    float m_thickness;
    float m_length;
    string m_colour;
    string m_brand;
    float m_price;
    Light *m_light;
};

#endif // WIRE_H
