#ifndef LOGINDETAILS_H
#define LOGINDETAILS_H
#include <iostream>
using namespace std;

class LoginDetails
{
public:
    LoginDetails();
    ~LoginDetails();
    virtual int getLoginId() = 0;
    virtual string getLoginName() = 0;
    virtual string getLoginPassword() = 0;

protected:
    int m_loginId;
    string m_loginName;
    string m_loginPassword;
};

#endif // LOGINDETAILS_H
