#include "b.h"
#include <iostream>

using namespace std;
B::B()
{
    cout<<"b cons"<<endl;
}

B::~B()
{
    cout<<"b des"<<endl;
}

void B::funb()
{
    this->fun();
    cout<<"func B"<<endl;
}
