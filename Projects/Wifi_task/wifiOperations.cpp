#include "wifiOperations.h"
#include <iostream>
#include <fstream>

using namespace std;

WifiOperations::WifiOperations()
{
    cout << "Wifi Operations Constructor Called" << endl;
    m_wifiList = readData();
    this->sortWiFiList();
}

WifiOperations::~WifiOperations()
{
    cout<< "Wifi Operations Destructor Called" << endl;
    for (auto i : m_wifiList)
    {
        delete i;
    }

}

list<Wifi*> WifiOperations::readData()
{
    list<Wifi*> data;
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
        data.push_back(new Wifi(name, strength, status, password));
        cout<<"Data read from FIle"<<endl;

    }

    file.close();
    return data;


}

void WifiOperations::writeData()
{
    ofstream file("WifiData.csv");
    if (!file)
    {
        cout << "unable to open CSV file for writing" << endl;
        return;
    }

    for (auto i : m_wifiList)
    {
        file << i->getName() << "," << i->getStrength() << "," << i->getStatus() << "," << i->getPassword() << endl;

    }

    file.close();
    cout << "Data written to CSV file" << endl;
}
void WifiOperations::sortWiFiList()
{

    for (auto i : m_wifiList)
    {
        for (auto j :m_wifiList )
        {
            if (i->getStatus() == "connected" && j->getStatus() != "connected" )
            {

                iter_swap(i, j);

            }
            if (i->getStatus() == "Saved" && j->getStatus() == "Available" )
            {

                iter_swap(i, j);
            }
            if (i->getStatus() == j->getStatus() && i->getStrength() > j->getStrength())
            {

                iter_swap(i, j);
            }
        }
    }
}

void WifiOperations::wifiConnection()
{
    string wifiName, password;
    cout <<endl<< "Enter WiFi Name to Connect: ";
    cin >> wifiName;

    int found =0;
    for (auto i : m_wifiList)
    {

        if(i->getStatus() == "connected" && i->getName() == wifiName)
        {
            found =1;
            cout<<endl<<"Wifi"<<wifiName<<" is already connected"<<endl;
            sortWiFiList();
            break;
        }
        if (i->getStatus() == "connected")
        {
            cout <<endl<< "Disconnecting from " << i->getName() << " and saving it" << endl;
            i->setStatus ("Saved");
            sortWiFiList();

        }

        if (i->getName() == wifiName)
        {
            if (i->getStatus() == "Saved")
            {
                found =1;
                cout<<endl << "Connecting to " << wifiName << endl;
                i->setStatus("connected");

                break;
            }
            else if (i->getStatus() == "Available")
            {
                cout <<endl<< "Enter password for " << wifiName << ": ";
                cin >> password;

                if (password == i->getPassword())
                {
                    found =1;
                    cout<<endl << " Entered password is Correct and Connecting to " << wifiName << endl;
                    i->setStatus("connected");

                }
                else
                {
                    cout <<endl<< "Incorrect password" << endl;
                }

                break;

            }
        }

    }
    if(found == 1)
    {
        sortWiFiList();
    }
    if(found ==0)
    {
        cout <<endl << "WiFi " << wifiName << " not found." << endl;

    }

}


void WifiOperations::display()
{


    cout << endl<<"Sorted Wifi List" << endl;

    for (auto i : m_wifiList)
    {
        cout << "Name: " << i->getName() << ", Signal Strength: " << i->getStrength() << ", Status: " << i->getStatus() << ", Password: " << i->getPassword() << endl;
    }
}
