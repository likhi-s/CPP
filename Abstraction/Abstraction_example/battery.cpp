#include "battery.h"

Battery::Battery()
{
    cout<<"Battery Constructor Called"<<endl;
}
Battery::~Battery()
{
    cout<<"Battery Destructor Called"<<endl;
}
void Battery::charge()
{
    cout<<"Battery is charging"<<endl;
}
