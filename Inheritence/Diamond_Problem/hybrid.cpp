#include "hybrid.h"

Hybrid::Hybrid()
{
    cout<<"Hybrid constructor Called"<<endl;
}

Hybrid::Hybrid(int a, int b):Petrolengine(a,b),Cngengine(a,b),Engine(a,b)
{

}
Hybrid::~Hybrid()
{
    cout<<"Hybrid Destructor Called"<<endl;
}
// void Hybrid::start()
// {
//     cout<<"Hybrid start"<<endl;
// }
