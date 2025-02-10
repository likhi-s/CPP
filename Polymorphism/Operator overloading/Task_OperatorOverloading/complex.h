#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;

class Complex
{
    int m_num;
public:
    Complex();
    Complex(int num);
    ~Complex();
    Complex operator + (const Complex &a);
    Complex operator - (const Complex &a);
    Complex operator * (const Complex &a);
    Complex operator / (const Complex &a);
    Complex operator = (const Complex &a);

    bool operator >= (const Complex &a);
    bool operator <= (const Complex &a);
    bool operator == (const Complex &a);
    Complex operator << (const Complex &a);
    void addfunc(const Complex &a);

    void printme();


};

#endif // COMPLEX_H
