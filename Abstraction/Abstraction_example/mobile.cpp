#include "mobile.h"

Mobile::Mobile()
{
    cout<<"MObile constructor called"<<endl;
}
Mobile::~Mobile()
{
    cout<<"MObile destructor called"<<endl;
}
void Mobile::chargeMobile()
{
    cout<<"Charging Mobile"<<endl;
    bobj.charge();
}
