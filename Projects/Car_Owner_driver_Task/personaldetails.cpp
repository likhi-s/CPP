#include "personaldetails.h"

PersonalDetails::PersonalDetails()
{
    cout<<"PersonalDetails Constructor Called"<<endl;

}

PersonalDetails::~PersonalDetails()
{
    cout<<"PersonalDetails Destructor Called"<<endl;

}

string PersonalDetails::getName()
{
    return m_name;
}

string PersonalDetails::getAddress()
{
    return m_address;
}

int PersonalDetails::getAge()
{
    return m_age;
}

string PersonalDetails::getNumber()
{
    return m_number;
}
