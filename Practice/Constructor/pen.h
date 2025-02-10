#ifndef PEN_H
#define PEN_H
#include <iostream>
using namespace std;

class Pen
{
public:
    int price =20;
    string colour="green";
    Pen();
    ~Pen();
    Pen(int a,string b);
    Pen(int a);

    void fun();
};

#endif // PEN_H
