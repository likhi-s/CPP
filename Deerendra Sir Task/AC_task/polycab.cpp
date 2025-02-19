#include "polycab.h"
#include "ac.h"

Polycab::Polycab()
{
    cout<<"Polycab Wire Default Constructor Called"<<endl;
}

Polycab::Polycab(float thickness, float length, string colour, string brand, float price)
{
    cout<<"polycab Wire Parameterized Constructor Called"<<endl;
}

Polycab::~Polycab()
{
    cout<<"Polycab Wire Destructor Called"<<endl;
}

void Polycab::setMe(AC *ac)
{
    acptr = ac;
}


void Polycab::wireOn()
{
    cout<<"polycab Wire on"<<endl;
    acptr->acOn();
}

