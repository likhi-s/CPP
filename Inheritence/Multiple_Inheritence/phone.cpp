#include "phone.h"
#include <iostream>
using namespace std;
Phone::Phone(int phone):m_phone(phone)
{
    cout<<"phone constructor called"<<endl;
}

Phone::~Phone()
{
    cout<<"phone destructor called"<<endl;

}
Phone::Phone()
{}

void Phone::makeacall()
{
    cout<<"make a call"<<endl;
}

void Phone::display()
{
    cout<<"phone display:"<<m_phone<<endl;
}
