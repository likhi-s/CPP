#ifndef WIFI_H
#define WIFI_H
#include <iostream>
using namespace std;
#include <list>

class Wifi
{
public:
    Wifi();
    Wifi(string name, int strength, string status, string password);
    ~Wifi();
    string getName();
    int getStrength();
    string getStatus();
    string getPassword();
    void setStatus(string status);


private:
    string m_name;
    int  m_signalStrength;
    string m_status;
    string m_password;

};

#endif // WIFI_H
