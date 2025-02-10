#include "a.h"
#include <iostream>
using namespace std;

A::A()
{
    cout<<"constructor"<<endl;
}

A::~A()
{
    cout<<"Destructor"<<endl;
}

// A::A(const A &obj)
// {
//     cout<<"Copy constructor called"<<endl;
//    //this-> a = new int(*obj.a);
// }
