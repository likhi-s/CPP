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
}

void Light::operator =(Light obj)
{
    cout<<" Light Assignment  Constructor Called"<<endl;
}

void Light::setWire(Wire *wire)
{
    cout<<"Light SetWire Function Called"<<endl;
    m_wire = wire;
}


Light::~Light()
{
    cout<<"Light Destructor Called"<<endl;
}


void Light::lightOn()
{
    cout<<"Light On"<<endl;

}
