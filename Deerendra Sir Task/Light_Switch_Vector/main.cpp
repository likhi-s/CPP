#include <iostream>
#include "light.h"
#include "switch.h"
#include "wire.h"

using namespace std;

int main()
{
    Wire wire;
    Light light;
    Switch switch1;

    switch1.initWire(&wire);

    wire.initLight(light);

    light.setWire(&wire);

    switch1.switchOn();


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
