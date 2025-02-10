#include <iostream>
#include "base.h"
using namespace std;

int main()
{
    Base obj1(20);
    Base obj2(30);
    Base obj3 = obj1.get() + obj2.get();
    obj3.fun();
    Base obj4 = obj1.get() * obj2.get();
    obj4.fun();
    cout<<obj3.get()<<endl;

    cout << "Hello World!" << endl;
    return 0;
}
