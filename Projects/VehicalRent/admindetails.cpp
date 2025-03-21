#include "admindetails.h"

AdminDetails::AdminDetails()
{
    cout<<"Admin Details Constructor Called"<<endl;
}

AdminDetails::~AdminDetails()
{
    cout<<"Admin Details Destructor Called"<<endl;

}

int AdminDetails::getLoginId()
{
    return m_loginId;
}

string AdminDetails::getLoginName()
{
    return m_loginName;
}

string AdminDetails::getLoginPassword()
{
    return m_loginPassword;
}
