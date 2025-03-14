#include "wifiOperations.h"


WifiOperations::WifiOperations()
{
    cout << "Wifi Operations Constructor Called" << endl;
    fileoperations = new FileOperations;
    m_wifiList =fileoperations->readData();
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
            break;
        }
        if (i->getStatus() == "connected")
        {
            cout <<endl<< "Disconnecting from " << i->getName() << " and saving it" << endl;
            i->setStatus ("Saved");            
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
