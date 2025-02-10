#include "pen.h"

Pen::Pen(int a ,string b)
{
    price = a;
    colour = b;

}

Pen::Pen(int a)
{
    price = a;
}

Pen::Pen()
{
    cout<<"constructor"<<endl;

}

void Pen:: fun()
{
    cout<<"hello"<<endl;
}

Pen ::~Pen()
{
    cout<<"destructor"<<endl;
}
