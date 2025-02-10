#include <iostream>
#include "pen.h"

using namespace std;

int main()
{
    Pen obj(30,"green");
    Pen obj1(50);
    Pen obj2;
    Pen obj3;
    obj.fun();
    cout<<"price1:"<<obj.price<<endl;
    cout<<"colour1:"<<obj.colour<<endl;
    cout<<"price2:"<<obj1.price<<endl;
    cout<<"colour2:"<<obj1.colour<<endl;
    cout<<"price3:"<<obj2.price<<endl;
    cout<<"colour3:"<<obj2.colour<<endl;
    cout<<"price4:"<<obj3.price<<endl;
    cout<<"colour4:"<<obj3.colour<<endl;


    cout << "Hello World!" << endl;
    return 0;
}
