#include "finolex.h"

Finolex::Finolex()
{    cout<<"Finolex Constructor called"<<endl;

    a = new int[100];
}

Finolex::~Finolex()
{
    cout<<"Finolex Destructor called"<<endl;
    delete a;
}
