#include "petrolengine.h"

Petrolengine::Petrolengine()
{
    cout<<"Petrol Engine Constructor called"<<endl;
}

Petrolengine::Petrolengine(int a, int b):Engine(a,b)
{
    cout<<"Petrol Engine  Parameterized Constructor called"<<endl;

}
Petrolengine::~Petrolengine()
{
    cout<<"Petrol Engine Destructor called"<<endl;
}
// void Petrolengine::start()
// {
//     cout<<"Petrol engine start"<<endl;
// }

