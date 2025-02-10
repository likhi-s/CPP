#include "mystatic.h"
#include <iostream>
using namespace std;

int MyStatic::staticVariable = 0;
MyStatic::MyStatic()
{
    staticVariable++;


}
void MyStatic::staticfun()
{

    //cout<<"Static function called"<<endl;
}
void MyStatic::nonStaticfun()
{
    cout<<"static Variable "<<staticVariable<<endl;
    staticVariable++;
}
