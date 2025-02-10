#include "base.h"

Base::Base()
{
    cout<<"constructor called"<<endl;

}
Base::Base(int a)
{
    m_a= a;
    cout<<"parameterized constructor called"<<endl;

}
Base::~Base()
{
    cout<<"Destructor called"<<endl;
}

void Base::fun()
{
    cout<<"function called and the value of a is "<<m_a<<endl;
}
int Base::get()
{
    return m_a;
}

// void Base::set(int a)
// {
//     m_a = a;
// }
