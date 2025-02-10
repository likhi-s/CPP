#include <iostream>

#include "add.h"
using namespace std;

int main()
{
    Add a1(20);
    Add a2(40);
    Add a3 = a1+a2;

    a3.printadd();
    cout << "Hello World!" << endl;
    a3.printadd();
    a2.printadd();


    return 0;
}
