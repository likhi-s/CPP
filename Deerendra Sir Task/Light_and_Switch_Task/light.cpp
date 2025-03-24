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

Light::~Light()
{
    cout<<"Light Destructor Called"<<endl;

}

void Light::lightOn()
{
    //cout<<"Light On   ->"<<"colour: "<<m_colour<<"   "<<"Price: "<<m_price<<"   "<<"Brand :"<<m_brand<<endl;
    cout<<"Light On"<<endl;


}
