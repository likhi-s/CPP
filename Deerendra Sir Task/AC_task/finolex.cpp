#include "finolex.h"
#include "ac.h"

Finolex::Finolex()
{
    cout<<"Finolex Wire Default Constructor Called"<<endl;

}
Finolex::~Finolex()
{
    cout<<"Finolex Wire Destructor Called"<<endl;
}


void Finolex::setMe(AC *ac)
{
    acptr = ac;
}


void Finolex::wireOn()
{
    cout<<"Finolex Wire on"<<endl;
    acptr->acOn();
}
