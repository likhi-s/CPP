#include <iostream>
#include "a.h"
#include "b.h"
#include "c.h"

using namespace std;

int main()
{
    B *ptr = new C ;
    ptr->fun();
    delete ptr;



    cout << "Hello World!" << endl;
    return 0;
}
