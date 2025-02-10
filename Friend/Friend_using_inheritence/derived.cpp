#include "derived.h"
// #include "base.h"

Derived::Derived()
{
    cout<<"derived constructor"<<endl;
}

Derived::~Derived()
{
    cout<<"derived destructor"<<endl;
}

void Derived::print()
{
    cout<<"derived function called"<<endl;
    printme();
}
