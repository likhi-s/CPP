#ifndef ADMINDETAILS_H
#define ADMINDETAILS_H
#include <iostream>
#include "logindetails.h"

using namespace std;
class AdminDetails:public LoginDetails
{
public:
    AdminDetails();
    ~AdminDetails();


    int getLoginId();
    string getLoginName();
    string getLoginPassword();
};

#endif // ADMINDETAILS_H
