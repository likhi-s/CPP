#ifndef WIFIOPERATIONS_H
#define WIFIOPERATIONS_H
#include "wifi.h"
#include <list>
#include <iostream>
using namespace std;

class WifiOperations
{
public:
    WifiOperations();
    ~WifiOperations();

    list<Wifi *> readData();
    void writeData();
    void display();
    void sortWiFiList();
    void wifiConnection();
private:
    list<Wifi*>m_wifiList;
};

#endif // WIFIOPERATIONS_H
