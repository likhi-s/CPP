#include <iostream>
// #include "demo.h"
//#include "pen.h"
#include "laptop.h"

using namespace std;

int main()
{
    int a =1000;
    string x = "blue";
    Laptop obj(a,x);
    Laptop obj1(2);
    cout<<"price:"<<obj.m_price<<endl;
    cout<<"colour:"<<obj.m_colour<<endl;
    obj.display();
    cout<<"id:"<<obj1.m_id<<endl;
    obj.add(10.10,2);
    obj.add(10.10f,10.10f);
    obj.sub(10,10);
    obj1.sub(2,"likhitha");


    return 0;
}























// Demo obj;
// obj.age(25);
// obj.id();

// cout << "Hello World!" << endl;

// Pen obj("green",10.0f,11.0f);
// cout<<"Colour:"<<obj.m_colour<<endl;
// cout<<"Price:"<<obj.m_price<<endl;
// cout<<"Length:"<<obj.m_length<<endl;

// obj.fun();
