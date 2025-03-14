#include "fileoperation.h"
#include <fstream>
FileOperation::FileOperation()
{
    cout<<"File Operations Constructor Called"<<endl;
}

FileOperation::~FileOperation()
{
    cout<<"File Operations Destructor Called"<<endl;

}

list<Bike*> FileOperation::readBikeData()
{

    list<Bike*> bikeData;
    ifstream file("BikeData.csv");
    if (!file)
    {
        cout << "unable to open Bike Data file for reading" << endl;
        return bikeData;
    }

    string model, status;
    int id,duration;
    float cost;

    while(file >>id && file.ignore() && getline(file,model,',') && file>>cost && file.ignore() && getline(file,status,',') && file>>duration  )
    {
        bikeData.push_back(new Bike (id,model,cost,status,duration));
    }

    file.close();
    return bikeData;
}

list<Car*> FileOperation::readCarData()
{
    list<Car*> carData;
    ifstream file("CarData.csv");
    if (!file)
    {
        cout << "unable to open file  Car Data for reading" << endl;
        return carData;
    }

    string model, status;
    int id,duration;
    float cost;

    while(file >>id && file.ignore() && getline(file,model,',') && file>>cost && file.ignore() && getline(file,status,',') && file>>duration  )
    {
        carData.push_back(new Car (id,model,cost,status,duration));
    }

    file.close();
    return carData;

}

list<RentalDetails *> FileOperation::readRentalData()
{

    list<RentalDetails*> rentData;
    ifstream file("CarData.csv");
    if (!file)
    {
        cout << "unable to open Rental Data file for reading" << endl;
        return rentData;
    }

    string name,mobile;
    int age,bookingId;
    while(getline(file,name,',') && getline(file,mobile,',') && file >> age && file.ignore() && file>> bookingId)
    {
        rentData.push_back(new RentalDetails(name,mobile,age,bookingId));
    }


    file.close();
    return rentData;
}

void FileOperation::writeBikeData()
{
    ofstream file("BikeData.csv");
        if (!file)
        {
            cout << "unable to open CSV file for writing" << endl;
            return;
        }

        for (auto i : )
        {
            file << i->getId<< "," << i->getStrength() << "," << i->getStatus() << "," << i->getPassword() << endl;

        }

        file.close();
        cout << "Data written to CSV file" << endl;
}

void FileOperation::writeCarData()
{

}

void FileOperation::writeRentalData()
{

}
