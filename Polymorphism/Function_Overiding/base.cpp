#include "base.h"

Base::Base()
{
    cout<<"Base class Constructor Called"<<endl;
}




void Base::print(int a,int b)

{
    cout<<"Base Class:"<<a+b<<endl;

}

Base::~Base()
{
    cout<<"Base class Destructor Called"<<endl;

}
