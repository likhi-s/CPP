#include <iostream>
#include "a.h"

using namespace std;

int main()
{
    A a1;
    a1.a =25;
    // a1.a = new int;
    // *a1.a =25;
    // A a2;
    // a2 =a1;

        A a2 = a1;
   // a2 = a1;
    // cout<<*a2.a<<endl;
    // cout<<*a1.a<<endl;
    cout<<a1.a<<endl;

    cout<<a2.a<<endl;
    //delete a2.a;
    // cout<<*a2.a<<endl;
    // cout<<*a1.a<<endl;

    cout << "before returning" << endl;
    return 0;
}
