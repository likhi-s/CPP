#ifndef SMARTPHONE_H
#define SMARTPHONE_H
#include "camera.h"
#include "music.h"
#include "phone.h"
class SmartPhone:public Camera,public Music,public Phone
{
public:
    SmartPhone(int camera,int music,int phone );
    SmartPhone();
    ~SmartPhone();
};

#endif // SMARTPHONE_H
