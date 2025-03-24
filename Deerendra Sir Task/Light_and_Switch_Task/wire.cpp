#include "wire.h"

Wire::Wire()
{
    cout<<"Wire Default Constructor Called"<<endl;
}


Wire::Wire(float thickness, float length, string colour, string brand, float price,Light *light)
{
    cout<<"Wire Parameterized Constructor Called"<<endl;

    m_thickness = thickness;
    m_length = length;
    m_colour = colour;
    m_brand = brand;
    m_price = price;
    m_light = light;
}

Wire::~Wire()
{
    cout<<"wire destructor called"<<endl;
}

void Wire::wireOn()
{
    //cout<<"Wire On -> "<<"Thickness : "<<m_thickness<<"   "<<"Length : "<<m_length<<"   "<<"Colour : "<<m_colour<<"  "<<"Brand : "<<m_brand<<"  "<<"Price : "<<m_price<<endl;
    cout<<"Wire On"<<endl;
    m_light->lightOn();
}
