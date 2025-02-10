#include "smartphone.h"
#include <iostream>
using namespace std;

SmartPhone::SmartPhone(int camera,int music,int phone):Camera(camera),Music(music),Phone(phone)
{
    cout<<"smartphone constructor called"<<endl;
    cout<<"Camera:"<<camera<<"    music:"<<music<<"      phone:"<<phone<<endl;

}

SmartPhone::~SmartPhone()
{
    cout<<"smartphone destructor called"<<endl;

}

SmartPhone::SmartPhone()
{

}
