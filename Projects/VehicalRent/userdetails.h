#ifndef USERDETAILS_H
#define USERDETAILS_H
#include <iostream>
using namespace std;
#include "logindetails.h"

class UserDetails:public LoginDetails
{
public:
    UserDetails();
    ~UserDetails();

    int getLoginId();
    string getLoginName();
    string getLoginPassword();
};

#endif // USERDETAILS_H
