#include <iostream>
#include "myclass.h"
#include <memory>
using namespace std;

int main()
{
    weak_ptr<int>wptr1 ;
    shared_ptr<int>shptr1 = make_shared<int>();
    wptr1 = shptr1;

    cout << "Hello World!" << endl;
    return 0;
}
