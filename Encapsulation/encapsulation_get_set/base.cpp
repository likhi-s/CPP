#include "base.h"

Base::Base()
{
    m_age =20;
    m_name = "xyz";
}
Base::~Base()
{

}

int Base::getage()
{
    return m_age;

}
void Base::setage(int age)
{
    m_age = age;

}
void Base::display()
{
    cout<<"Age:"<<m_age<<endl;
    cout<<"Name:"<<m_name<<endl;
}
string Base::getname()
{
    return m_name;
}
void Base::setname(string name)
{
    m_name = name;
}
