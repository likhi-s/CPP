#include "b.h"
#include "a.h"

B::B()
{
    cout<<"B constructor called"<<endl;
}
B::~B()
{
    cout<<"B Destructor called"<<endl;
}
void B::fun2(A &a1)
{
    cout<<"fun2 Called"<<endl;

    a1.m_a =23;
    a1.m_b ="likhitha";
    cout<<a1.m_a<<" "<<a1.m_b<<endl;

}
void B::fun3()
{
    cout<<"fun3 Called"<<endl;

    // a->m_a =23;
    // a->m_b ="Pallavi";
    // cout<<a->m_a<<" "<<a->m_b<<endl;

}
