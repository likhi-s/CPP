#ifndef SWITCH_H
#define SWITCH_H
#include <iostream>
using namespace std;
#include "wire.h"
#include "list"

class Switch
{
public:
    Switch();
    Switch(string colour, string brand, float price, list<Wire*> wireList);
    ~Switch();

    void switchOn();

private:
    string m_colour;
    string m_brand;
    float m_price;
    list<Wire*> m_wireList;
};

#endif // SWITCH_H


