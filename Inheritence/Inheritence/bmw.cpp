#include "bmw.h"

#include <iostream>
using namespace std;

BMW::BMW(int s_private,int s_public,int s_protected):Car(s_private,s_public,s_protected)
{
    cout<<"constructor in BMW called"<<endl;

    cout<<"s_private:"<<s_private<<endl;
    cout<<"s_public:"<<s_public<<endl;
    cout<<"s_protected:"<<s_protected<<endl;
}

BMW::~BMW()
{
    cout<<"destructor in BMW called"<<endl;

}



