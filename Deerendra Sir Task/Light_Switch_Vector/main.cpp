#include <iostream>
#include "light.h"
#include "wire.h"
#include "switch.h"
using namespace std;

int main()
{

    vector <Light> lightList  ;

    lightList.push_back(Light("Green",250,"brand1"));
     lightList.push_back(Light("Red",150,"brand2"));
    lightList.push_back(Light("Blue",350,"brand3"));
    lightList.push_back(Light("yellow",350,"brand4"));
    lightList.push_back(Light ("white",200,"brand5"));


    cout<<"vector Capacity :"<<lightList.capacity()<<endl;
    cout<<"vector Size :" <<sizeof(lightList)<<endl;;


    Wire wire(32,200,"Black","Havells",1500,lightList);
    Switch switch1("White", "Brand1", 350);
    switch1.initWire(&wire);


    for (int i =0;i<4;i++)
    {

        Light light;
        light.setWire(&wire);


    }

    switch1.switchOn();




    cout << "Hello World!" << endl;
    return 0;
}

















// Light light1("Green",250,"brand1");
// Light light2("Red",150,"brand2");
// Light light3("Blue",350,"brand3");
// vector <Light*> lightList;
// lightList = { &light1 , &light2 , &light3 };

// Wire wire(32,200,"Black","Havells",1500,lightList);
// Switch switch1("White", "Brand1", 350, &wire);
// switch1.initWire(&wire);
// light1.setWire(&wire);
// light2.setWire(&wire);
// light3.setWire(&wire);
// switch1.switchOn();
