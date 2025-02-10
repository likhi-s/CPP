#include "demo.h"
#include <iostream>
using namespace std;


Demo::Demo()
{
    Age=20;
    Id =30;
}
void Demo ::id()
{
    cout<<"id = "<<Id<<endl;
}
void Demo ::age(int a)
{
    Age = a;
    cout<<"Age = "<<Age<<endl;

}
