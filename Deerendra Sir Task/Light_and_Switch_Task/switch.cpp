#include "switch.h"

Switch::Switch()
{
    cout<<"Switch default Constructor Called"<<endl;
}

Switch::Switch(string colour, string brand, float price, list<Wire*> wireList)
{
    cout<<"Switch Parameterized Constructor Called"<<endl;

    m_colour = colour;
    m_brand = brand;
    m_price = price;
    m_wireList = wireList;
}


Switch::~Switch()
{
    cout<<"Switch Destructor Called"<<endl;

}


void Switch::switchOn()
{
    // cout<<"Switch On -> "<<"colour : "<<m_colour<<"  "<<"Brand : "<<m_brand<<"  "<<"Price : "<<m_price<<endl;

    cout<<"Switch On"<<endl;
    for(auto wire : m_wireList)
    {
        wire->wireOn();
    }
}




