#include "wire.h"

Wire::Wire()
{
    cout<<"Wire Default Constructor Called"<<endl;
}


Wire::Wire(float thickness, float length, string colour, string brand, float price, vector<Light > light)
{
    cout<<"Wire Parameterized Constructor Called"<<endl;

    m_thickness = thickness;
    m_length = length;
    m_colour = colour;
    m_brand = brand;
    m_price = price;
    m_lightList = light;
}

Wire::Wire(const Wire &obj)
{
    cout<<"Wire Copy Conctructor Called"<<endl;
}


Wire::~Wire()
{
    cout<<"wire destructor called"<<endl;
}

void Wire::operator =( Wire obj)
{
    cout<<"  Wire Assignment  Constructor Called"<<endl;
}
void Wire::wireOn()
{
    // cout<<"Wire On -> "<<"Thickness : "<<m_thickness<<"   "<<"Length : "<<m_length<<"   "<<"Colour : "<<m_colour<<"  "<<"Brand : "<<m_brand<<"  "<<"Price : "<<m_price<<endl;
    cout<<"Wire On"<<endl;

    for(auto light = m_lightList.begin(); light != m_lightList.end();light++)
    {
        light->lightOn();

    }
    // for(auto light :m_lightList)
    // {
    //     light.lightOn();
    // }
}

