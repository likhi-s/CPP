#ifndef BASE_H
#define BASE_H
#include <iostream>

using namespace std;
class Base
{
    int m_a;

public:
    Base();
    Base(int a);
    ~Base();
    void fun();
    int get();
    // void set(int a);
};

#endif // BASE_H
