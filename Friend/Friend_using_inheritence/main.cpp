#include <iostream>
#include "base.h"
#include "derived.h"
using namespace std;

int main()

{
    // Base b(1,"likhitha");
    // b.display();
    Derived d;
    d.print();
    cout << "Hello World!" << endl;
    return 0;
}
