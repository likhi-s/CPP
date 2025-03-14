#ifndef WIFIOPERATIONS_H
#define WIFIOPERATIONS_H
#include "fileoperations.h"
#include <list>
#include <iostream>
#include <fstream>
using namespace std;


class WifiOperations
{
public:
    WifiOperations();
    ~WifiOperations();
    void display();
    void sortWiFiList();
    void wifiConnection();
private:
    list<Wifi*>m_wifiList;
    FileOperations *fileoperations;
};

#endif // WIFIOPERATIONS_H
