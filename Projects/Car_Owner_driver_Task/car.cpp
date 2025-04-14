#include "car.h"

Car::Car()
{
    cout<<"Car Constructor Called"<<endl;
}

Car::~Car()
{
    cout<<"Car Destructor Called"<<endl;
    delete m_driver;

}

void Car::assignDriver(Driver *driver)
{
    m_driver = driver;
    cout<<"      Driver Assigned to car and details are below   "<<endl;
    cout<<"Name :"<<m_driver->getName()<<endl;
    cout<<"Address :"<<m_driver->getAddress()<<endl;
    cout<<"Age :"<<m_driver->getAge()<<endl;
    cout<<"Number :"<<m_driver->getNumber()<<endl;

}
