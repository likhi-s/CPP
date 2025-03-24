#include "switch.h"

Switch::Switch()
{
    cout<<"Switch default Constructor Called"<<endl;
}

Switch::Switch(string colour, string brand, float price,Wire *wire1, Wire *wire2, Wire *wire3)
{
    cout<<"Switch Parameterized Constructor Called"<<endl;
    m_colour =colour;
    m_brand = brand;
    m_price = price;
    m_wire1= wire1;
    m_wire2= wire2;
    m_wire3= wire3;
}


Switch::~Switch()
{
    cout<<"Switch Destructor Called"<<endl;

}

void Switch::switchOn()
{
   // cout<<"Switch On -> "<<"colour : "<<m_colour<<"  "<<"Brand : "<<m_brand<<"  "<<"Price : "<<m_price<<endl;
    cout<<"Switch On"<<endl;
    m_wire1->wireOn();
    m_wire2->wireOn();
    m_wire3->wireOn();
}
