#include "derived.h"

Derived::Derived(){
    cout<<"Derived class Constructor Called"<<endl;

}

void Derived::print(int a, int b)
{
    cout<<"Derived Class:"<<a-b<<endl;
}
Derived::~Derived(){
    cout<<"Derived class Destructor Called"<<endl;

}
