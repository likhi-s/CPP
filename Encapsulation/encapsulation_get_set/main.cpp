#include <iostream>
#include "base.h"

using namespace std;

int main()
{
    Base obj;
    obj.display();
    obj.setage(23);
    obj.setname("Likhitha");
    //cout<<obj.getid()<<endl;
    obj.display();
    obj.setname("Pallavi");
    obj.display();
    cout << "Hello World!" << endl;
    return 0;
}
