#ifndef SHOPPING_H
#define SHOPPING_H
#include "iostream"
using namespace std;

class Shopping
{
public:
    Shopping();
    ~ Shopping();
    void search(string m_product,string m_brand);
    void search(string m_product,float m_price);
};

#endif // SHOPPING_H
