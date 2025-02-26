#include "wire.h"

Wire::Wire()
{
    cout<<"Wire Constructor called"<<endl;
    ptr = new int[10];
}

Wire::~Wire()
{
    cout<<"Wire Destructor called"<<endl;
    delete ptr;
}
