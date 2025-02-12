#include <iostream>
#include "a.h"
#include "b.h"

using namespace std;

int main()
{
    A a1;
    a1.fun1();
    B b;
    b.fun2(a1);
    b.fun3();
    cout << "Hello World!" << endl;
    return 0;
}
