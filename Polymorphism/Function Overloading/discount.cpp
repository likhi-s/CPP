#include "discount.h"

Discount::Discount()
{
    cout<<"discount constructor called"<<endl;

}
Discount::~Discount()
{
    cout<<"discount Destructor called"<<endl;

}
void Discount::apply(int percentage)
{
    cout<<"Applied discount on your bill is:"<<percentage<<"%"<<endl;
}
void Discount::apply(string couponCode)
{
    cout<<"Applied Couponcode on your bill is:"<<couponCode<<endl;

}
