#include "fileoperations.h"

FileOperations::FileOperations()
{
    cout<<"File Operations Constructor Called"<<endl;
}

FileOperations::~FileOperations()
{
    cout<<"File Operations Destructor Called"<<endl;
}
list<Wifi*> FileOperations::readData()
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

    }

    file.close();
    return data;


}

//  void FileOperations::writeData()
// {
//     ofstream file("WifiData.csv");
//     if (!file)
//     {
//         cout << "unable to open CSV file for writing" << endl;
//         return;
//     }

//     for (auto i : m_wifiList)
//     {
//         file << i->getName() << "," << i->getStrength() << "," << i->getStatus() << "," << i->getPassword() << endl;

//     }

//     file.close();
//     cout << "Data written to CSV file" << endl;
//  }
