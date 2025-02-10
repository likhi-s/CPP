#ifndef BASE_H
#define BASE_H
#include <iostream>
//#include "derived.h"
using namespace std;
 class Derived;
class Base
{
    int m_a;
    string m_b;
    void printme();

public:
    Base();
    Base(int a,string b);
    ~Base();
    void display();
    friend class Derived;

};

#endif // BASE_H
