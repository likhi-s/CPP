#include <iostream>
#include "a.h"

using namespace std;

int main()
{
    A a1(20);
    A a2(30);
    A a4(40);
    A a3 = a1 + a2 +a4;
    // A a4 = a1;
    // //a4.printme();
    // A a5(a1=a2);
    a3.printme();

    cout << "Hello World!" << endl;
    return 0;
}
