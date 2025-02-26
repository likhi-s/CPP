#include "havells.h"
#include "ac.h"
Havells::Havells()
{
    cout<<"Havells Default Construtor Called"<<endl;
}
Havells::~Havells()
{
    cout<<"Havells Destrutor Called"<<endl;

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
