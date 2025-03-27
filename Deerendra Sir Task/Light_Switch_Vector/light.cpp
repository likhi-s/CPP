#include "light.h"

Light::Light()
{
    cout<<"Light Default Constructor Called"<<endl;
}

Light::Light(string colour, float price, string brand)
{
    cout<<"Light Parameterized Constructor Called"<<endl;
    m_colour = colour;
    m_price = price;
    m_brand = brand;
}

Light::Light(const Light &obj)
{
    cout<<"Light Copy constructor called"<<endl;
    m_colour = obj.m_colour;
    m_price = obj.m_price;
    m_brand = obj.m_brand;

}

void Light::operator =(Light obj)
{
    cout<<" Light Assignment  Constructor Called"<<endl;

}


Light::~Light()
{
    cout<<"Light Destructor Called"<<endl;

}

void Light::setWire(Wire *wire)
{
    cout<<"Light SetWire Function Called"<<endl;
    m_wire = wire;
}

void Light::lightOn()
{
    //cout<<"Light On   ->"<<"colour: "<<m_colour<<"   "<<"Price: "<<m_price<<"   "<<"Brand :"<<m_brand<<endl;
    cout<<"Light On"<<endl;

}

