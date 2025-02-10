#include "b.h"
#include <iostream>
using namespace std;

B::B()
{
    cout<<"Class B constructor called"<<endl;

}

B::~B()
{
    cout<<"Class B destructor called"<<endl;

}
void B::checkb()
{
    cout<<"function of class B"<<endl;
}

void B::display()
{
    cout<<"display B"<<endl;

}
