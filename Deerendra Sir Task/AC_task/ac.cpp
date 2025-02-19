#include "ac.h"

AC::AC()
{
    cout<<"AC Default Constructor called"<<endl;
}

AC::AC(string brand, string colour, float price)
{
    cout<<"AC Parameterized Constructor called"<<endl;

    m_brand = brand;
    m_colour = colour;
    m_price  = price;
   m_polycabwire = NULL;
    m_finolexwire =NULL;
}

AC::~AC()
{
    cout<<"AC Destructor called"<<endl;
}

void AC::setPolycabWire(Polycab* polycabwire)
{
    m_polycabwire = polycabwire;
    m_polycabwire->setMe(this);
}

void AC::setFinolexWire(Finolex* finolexwire)
{
    m_finolexwire = finolexwire;
    m_finolexwire->setMe(this);
}

void AC::acOn()
{
    cout<<"AC turned on"<<endl;
}
