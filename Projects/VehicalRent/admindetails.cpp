#include "admindetails.h"

AdminDetails::AdminDetails()
{
    cout<<"Admin Details Constructor Called"<<endl;
}

AdminDetails::AdminDetails(string name, int id, int password)
{

    m_loginName = name;
    m_loginId = id;
    m_loginPassword = password;
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

int AdminDetails::getLoginPassword()
{
    return m_loginPassword;
}
