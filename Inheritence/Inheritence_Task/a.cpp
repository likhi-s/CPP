#include "a.h"
#include <iostream>
using namespace std;

A::A()
{
    m_a = 20;
    cout<<"class A constructor Called"<<endl;
}

A::~A()
{
    cout<<"class A destructor Called"<<endl;
}
void A::checka()
{
    cout<<"function of class A"<<endl;
}

void A::display()
{
    cout<<"display A"<<endl;

}
