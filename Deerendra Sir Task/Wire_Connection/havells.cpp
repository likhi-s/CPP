#include "havells.h"
#include "ac.h"

Havells::Havells()
{
    cout<<"Havells Constructor Called"<<endl;

}

Havells::~Havells()
{
    cout<<"Havells Destructor Called"<<endl;

}
void Havells::setMe(AC *ac)
{
    acptr = ac;
}


void Havells::wireOn()
{
    cout<<"Havells Wire on"<<endl;
    acptr->acOn();
}
