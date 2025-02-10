#include "laptop.h"
#include <iostream>
using namespace std;

Laptop::Laptop(float price ,string colour)
{
    m_price = price;
    m_colour = colour;
}

Laptop::Laptop(float id)
{
    m_id = id;
}

void Laptop ::display()
{
    cout << "Hello" << endl;
}

void Laptop:: add(int a, int b)
{
    int sum;
    sum = a+b;
    cout<<"sum:"<<sum<<endl;
}

void Laptop::add(float a, float b)
{
    float res =0;
    res = a+b;
    cout<<"res:"<<res<<endl;
}
void Laptop::sub(double a,double b)
{
    double sub;
    sub = a-b;
    cout<<"sub:"<<sub<<endl;
}
void Laptop::sub(int a ,string b)
{
    cout<<"hii"<<endl;
}
