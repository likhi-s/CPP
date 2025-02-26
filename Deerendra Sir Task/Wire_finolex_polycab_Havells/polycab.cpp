#include "polycab.h"

Polycab::Polycab()
{
    cout<<"Polycab Constructor called"<<endl;

    c = new int[300];
}

Polycab::~Polycab()
{
    cout<<"Polycab Destructor called"<<endl;
    delete c;
}
