#include <iostream>
#include "c.h"
using namespace std;

int main()
{
    A *ptr = new C ;
    ptr->fun();
    delete ptr;
    return 0;
}
