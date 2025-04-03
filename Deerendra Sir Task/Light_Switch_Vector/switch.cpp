#include "switch.h"

Switch::Switch()
{
    cout<<"Switch default Constructor Called"<<endl;
}

Switch::Switch(string colour, string brand, float price)
{
    cout<<"Switch Parameterized Constructor Called"<<endl;

    m_colour = colour;
    m_brand = brand;
    m_price = price;
}


Switch::~Switch()
{
    cout<<"Switch Destructor Called"<<endl;
}

Switch::Switch(const Switch &obj)
{
    cout<<"Switch Copy Constructor called"<<endl;
}

void Switch:: operator =( Switch obj)
{
    cout<<" Switch Assignment  Constructor Called"<<endl;
}

void Switch::initWire(Wire *wire)
{
    cout<<"Switch Init Wire Function Called"<<endl;
    m_wire = wire;
}

void Switch::switchOn()
{
    cout<<"Switch On"<<endl;
    m_wire->wireOn();
}
