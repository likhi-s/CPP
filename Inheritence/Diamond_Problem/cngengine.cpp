#include "cngengine.h"

Cngengine::Cngengine()
{
    cout<<"CNG engine COnstructor called"<<endl;
}

Cngengine::Cngengine(int a, int b):Engine(a,b)
{
    cout<<"CNG parameterized constructor called"<<endl;
}

Cngengine::~Cngengine()
{
    cout<<"CNG engine Destructor called"<<endl;
}
// void Cngengine::start()
// {
//     cout<<"CNG engine start"<<endl;
// }


