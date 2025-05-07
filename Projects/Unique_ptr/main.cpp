#include <iostream>
#include "myclass.h"
using namespace std;
#include <memory>

int main()
{
    {
        unique_ptr<MyClass>unptr = make_unique<MyClass>();
    }
    cout << "Hello World!" << endl;
    return 0;
}
