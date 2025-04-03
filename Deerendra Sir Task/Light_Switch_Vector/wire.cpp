#include "wire.h"

Wire::Wire()
{
    cout<<"Wire Default Constructor Called"<<endl;
}


Wire::Wire(float thickness, float length, string colour, string brand, float price)
{
    cout<<"Wire Parameterized Constructor Called"<<endl;

    m_thickness = thickness;
    m_length = length;
    m_colour = colour;
    m_brand = brand;
    m_price = price;
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
void Wire::initLight(Light &light)
{
    for(int i =0;i<=16;i++)
    {
        m_lightList.push_back(light);
        cout<<"object pushed"<<endl;
    }
    cout<<" Vector Capacity :"<<m_lightList.capacity()<<endl;
}

void Wire::wireOn()
{
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
