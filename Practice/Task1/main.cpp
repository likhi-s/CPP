#include <iostream>
#include "operations.h"

using namespace std;

int main()
{
    Operations obj;
    obj.add(6,5);
    obj.add(6.5f,5.5f);
    obj.add(6.5,5.5);
    obj.add(5,5,5);
    obj.add(6.5f,6.5f,6.5f);
    obj.add(6.5,6.5,6.5);
    obj.add();

    obj.sub(10, 5);
    obj.sub(10.5f, 5.5f);
    obj.sub(20.5, 15.5);
    obj.sub(15, 5, 3);
    obj.sub(15.5f, 5.5f, 3.5f);
    obj.sub(25.5, 10.5, 5.5);
    obj.sub();



    cout << "Hello World!" << endl;
    return 0;
}
