#ifndef DISCOUNT_H
#define DISCOUNT_H
#include "iostream"
using namespace std;
class Discount
{
public:
    Discount();
    ~Discount();
    void apply(int percentage);
    void apply(string couponCode);

};

#endif // DISCOUNT_H
