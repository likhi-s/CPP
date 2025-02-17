#include <iostream>
#include "task.h"
using namespace std;

int main()
{
    Task <int,int> obj1(2,3);
    obj1.display();
    Task <int,float> obj2(2,3.2);
    obj2.display();
    cout << "Hello World!" << endl;
    return 0;
}
