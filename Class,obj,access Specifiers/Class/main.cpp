#include <iostream>
#include "a.h"
#include "b.h"


using namespace std;

int main()
{
    b object(2,3,4);
    object.obj.fun();
    return 0;
}
