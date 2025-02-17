#include "test.h"

Test::Test() {}


Test::~Test() {}



template<typename T ,typename T1>
void Test::add(T a ,T1 b)
{
    auto sum = a+b;
    cout<<sum<<endl;
}
template void Test::add(int,float);
template void Test::add(float,int);
