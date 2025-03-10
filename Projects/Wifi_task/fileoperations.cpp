#include "fileoperations.h"
#include <iostream>
#include <fstream>

using namespace std;

FileOperations::FileOperations()
{
    cout << "File Operations Constructor Called" << endl;
}

FileOperations::~FileOperations()
{
    cout << "File Operations Destructor Called" << endl;
}

list<Wifi> FileOperations::readData()
{
    list<Wifi> data;
    ifstream file("WifiData.csv");
    if (!file)
    {
        cout << "Unable to open file for reading" << endl;
        return data;
    }

    string name, status, password;
    int strength;

    while (getline(file, name, ',') && file >> strength && file.ignore() && getline(file, status, ',') && getline(file, password))
    {
        data.push_back(Wifi(name, strength, status, password));
    }

    file.close();
    return data;
}

void FileOperations::writeData(list<Wifi>& data)
{
    ofstream file("WifiData.csv");
    if (!file)
    {
        cout << "Unable to open CSV file for writing" << endl;
        return;
    }
    for (auto i = data.begin(); i != data.end(); i++)
    {
        file << i->getName() << "," << i->getStrength() << "," << i->getStatus() << "," << i->getPassword() << endl;
    }

    file.close();
    cout << "Data written to CSV file" << endl;
}
void FileOperations::sortWiFiList(list<Wifi>& wifiList)
{
    for (auto i = wifiList.begin(); i != wifiList.end(); i++)
    {
        for (auto j = next(i); j != wifiList.end(); j++)
        {
            if (i->getStatus() != "connected" && j->getStatus() == "connected")
            {
                iter_swap(i, j);
            }
            if (i->getStatus() == "Available" && j->getStatus() == "Saved")
            {
                iter_swap(i, j);
            }
            if (i->getStatus() == j->getStatus() && i->getStrength() < j->getStrength())
            {
                iter_swap(i, j);
            }
        }
    }
}



void FileOperations::display(list<Wifi>& wifiList)
{
    sortWiFiList(wifiList);

    cout << "\nSorted WiFi Networks:\n";
    for (auto i = wifiList.begin(); i != wifiList.end(); i++)
    {
        cout << "Name: " << i->getName() << ", Signal Strength: " << i->getStrength()
        << ", Status: " << i->getStatus() << ", Password: " << i->getPassword() << endl;
    }
}
