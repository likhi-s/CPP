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
        cout << "unable to open file for reading" << endl;
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
        cout << "unable to open CSV file for writing" << endl;
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

void FileOperations::wifiConnection(list<Wifi>& wifiList)
{
    string wifiName, password;
    cout <<endl<< "Enter WiFi Name to Connect: ";
    cin >> wifiName;

    for (auto i = wifiList.begin(); i != wifiList.end(); i++)
    {
        if(i->getStatus() == "connected" && i->getName() == wifiName)
        {
            cout<<endl<<wifiName<<" is already connected"<<endl;
            return;
        }
        if (i->getStatus() == "connected")
        {
            cout <<endl<< "Disconnecting from " << i->getName() << " and saving it" << endl;
            i->setStatus("Saved");
        }
        if (i->getName() == wifiName)
        {
            if (i->getStatus() == "Saved")
            {
                cout<<endl << "Connecting to " << wifiName << endl;
                i->setStatus("connected");
                writeData(wifiList);
                display(wifiList);

                return;
            }
            else if (i->getStatus() == "Available")
            {
                cout <<endl<< "Enter password for " << wifiName << ": ";
                cin >> password;

                if (password == i->getPassword())
                {
                    cout<<endl << " Entered password is Correct and Connecting to " << wifiName << endl;
                    i->setStatus("connected");
                    writeData(wifiList);
                    display(wifiList);
                }
                else
                {
                    cout <<endl<< "Incorrect password" << endl;
                }
                return;

            }
        }
    }

    cout << "WiFi " << wifiName << " not found." << endl;
}



void FileOperations::display(list<Wifi>& wifiList)
{

    sortWiFiList(wifiList);

    cout << endl<<"Sorted Wifi List"<<endl;
    for (auto i = wifiList.begin(); i != wifiList.end(); i++)
    {
        cout << "Name: " << i->getName() << ", Signal Strength: " << i->getStrength() << ", Status: " << i->getStatus() << ", Password: " << i->getPassword() << endl;
    }
}
