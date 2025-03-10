#include "wifi.h"

Wifi::Wifi()
{
    cout<<"Wifi default Constructor Called"<<endl;
}

Wifi::Wifi(string name, int strength, string status, string password)
{
    cout<<"Wifi Parameterized Constructor Called"<<endl;

    m_name = name;
    m_signalStrength = strength;
    m_status = status;
    m_password = password;
}

Wifi::~Wifi()
{
    cout<<"Wifi Destructor Called"<<endl;
}

string Wifi::getName()
{
    return m_name;

}

int Wifi::getStrength()
{
    return m_signalStrength;
}

string Wifi::getStatus()
{
    return m_status;
}

string Wifi::getPassword()
{
    return m_password;
}



