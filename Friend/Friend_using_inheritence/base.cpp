#include "base.h"

void Base::printme()
{

    cout<<"printme function called"<<endl;
}

Base::Base()
{
    cout<<"Default base constructor"<<endl;
}

Base::Base(int a, string b)
{
    cout<<"Parameterized base constructor"<<endl;
    m_a =a;
    m_b =b;
}

Base::~Base()
{
    cout<<"base Destructor"<<endl;
}

void Base::display()
{

    cout<<"Base display fun"<<endl;

    cout<<m_a<<" "<<m_b<<endl;
}
