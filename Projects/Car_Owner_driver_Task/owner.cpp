#include "owner.h"

Owner::Owner()
{
    cout<<"Owner Constructor Called"<<endl;
}

Owner::Owner(string name, string address, int age, string number)
{
    cout<<"Owner Parameterized Constructor Called"<<endl;

    m_name = name;
    m_address = address;
    m_age = age;
    m_number = number;
}

Owner::~Owner()
{
    cout<<"Owner Destructor Called"<<endl;
    delete car;
}

void Owner::assignDriver(Driver *driver)
{
    cout<<"Owner "<<m_name<<" hired "<<driver->getName()<<" As a driver"<<endl;
    car->assignDriver(driver);
}
