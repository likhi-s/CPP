#include "userdetails.h"

UserDetails::UserDetails()
{
    cout<<"User Details Constructor Called"<<endl;
}

UserDetails::~UserDetails()
{
    cout<<"User Details Destructor Called"<<endl;

}

int UserDetails::getLoginId()
{
    return m_loginId;
}

string UserDetails::getLoginName()
{
    return m_loginName;
}

string UserDetails::getLoginPassword()
{
    return m_loginPassword;
}
