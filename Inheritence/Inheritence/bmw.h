#ifndef BMW_H
#define BMW_H
#include "car.h"

class BMW : public Car
{

public:

    BMW(int s_private,int s_public,int s_protected);
    ~BMW();
};

#endif // BMW_H
