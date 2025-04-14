#include "driver.h"

Driver::Driver()
{
    cout<<"Driver Constructor Called"<<endl;

}
Driver::Driver(string name,string address,int age,string number)
{
    cout<<"Driver Parametrized Constructor Called"<<endl;

    m_name = name;
    m_address = address;
    m_age = age;
    m_number = number;
}

Driver::~Driver()
{
    cout<<"Driver Destructor Called"<<endl;

}
