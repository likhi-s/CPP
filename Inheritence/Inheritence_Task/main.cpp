#include <iostream>
#include "a.h"
#include "b.h"
#include "c.h"
#include "d.h"


using namespace std;

int main()
{

    D obj;
    obj.checka();
    obj.checkb();
    obj.checkc();
    obj.checkd();
    obj.display();
    obj.A::display();
    obj.B::display();
    obj.C::display();
    obj.D::display();

    cout << "Hello World!" << endl;
    return 0;
}
