#include <iostream>
#include "smartphone.h"

using namespace std;

int main()
{
    SmartPhone obj(1,2,3);
    obj.makeacall();
    obj.playMusic();
    obj.takeapic();
    obj.Phone::display();
    obj.Camera::display();
    obj.Music::display();
    cout << "Hello World!" << endl;
    return 0;
}
