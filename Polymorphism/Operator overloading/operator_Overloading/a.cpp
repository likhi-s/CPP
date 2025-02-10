#include "a.h"
#include <iostream>
using namespace std;
A::A()
{
    cout<<"default constructor called"<<endl;
}
A::A(int real)
{
    cout<<"parameterized constructor called"<<endl;
    m_real = real;

}


A A::operator = (const A &obj)
{
    cout<<" = operator  called"<<endl;
    A result;
    result.m_real  = obj.m_real;
    return result;
}
A A::operator + ( const A &obj)
{
    cout<<" + operator called"<<endl;
    A result;
    result.m_real = this->m_real + obj.m_real;
    cout<<"this "<<this->m_real<<endl;
    //result.m_real  = m_real+obj.m_real;

    return result;
}

void A::printme()
{
    cout<<m_real<<"="<<m_real<<endl;
}


