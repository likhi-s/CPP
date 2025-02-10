#include "car.h"
#include <iostream>
using namespace std;



Car::Car(int c_private, int c_protected, int c_public) : m_private(c_private),m_protected(c_protected),m_public(c_public)
{
    cout<<"constructor in car called"<<endl;

    cout<<"m_private:"<<m_private<<endl;
    cout<<"m_public:"<<m_public<<endl;
    cout<<"m_protected:"<<m_protected<<endl;
}


Car::Car(){}
Car::~Car()
{
    cout<<"destructor in car called"<<endl;

}


