#ifndef WIRE_H
#define WIRE_H
#include <iostream>
using namespace std;
#include "light.h"
#include <vector>
class Light;
class Wire
{
public:
    Wire();
    Wire(float thickness, float length, string colour, string brand, float price, vector<Light> light);

    Wire(const Wire &obj);
    void operator =(Wire obj);

    ~Wire();

    void wireOn();

private:
    float m_thickness;
    float m_length;
    string m_colour;
    string m_brand;
    float m_price;
    vector<Light>m_lightList;
};

#endif // WIRE_H
