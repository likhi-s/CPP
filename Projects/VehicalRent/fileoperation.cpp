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
    ifstream file("RentalData.csv");
    if (!file)
    {
        cout << "unable to open Rental Data file for reading" << endl;
        return rentData;
    }

    string name,mobile,model,status,vehicalType,paymentStatus;
    int age,bookingId,id,duration;
    float cost;
    while(getline(file,name,',') && getline(file,mobile,',') && file >> age && file.ignore() && file>> bookingId && file.ignore() && getline(file,vehicalType,',') && getline(file,paymentStatus,',') && file>>id && file.ignore() && getline(file,model,',') && file>> cost && file.ignore() && getline(file,status,',') && file>>duration )
    {

       rentData.push_back(new RentalDetails(name,mobile,age,bookingId,vehicalType,paymentStatus,id, model,cost,status,duration));

    }


    file.close();
    return rentData;
}

void FileOperation::writeBikeData(list<Bike*> &bike)
{
    ofstream file("BikeData.csv");
        if (!file)
        {
            cout << "unable to open CSV file for writing" << endl;
            return;
        }
        for(auto i :bike)
        {
            file << i->getBikeId()<< "," << i->getModel() << "," << i->getCost() <<"," << i->getStatus() << ","<< i->getDuration()<<endl;

        }

        file.close();
        cout << "Data written to CSV file" << endl;
}

void FileOperation::writeCarData(list<Car*>&car)
{
    ofstream file("CarData.csv");
    if (!file)
    {
        cout << "unable to open CSV file for writing" << endl;
        return;
    }
    for(auto i :car)
    {
        file << i->getCarId()<< "," << i->getModel() << "," << i->getCost() <<"," << i->getStatus() << ","<< i->getDuration()<<endl;

    }

    file.close();
    cout << "Data written to CSV file" << endl;
}

void FileOperation::writeRentalData(list<RentalDetails*> &rent)
{
    ofstream file("RentalData.csv");
    if(!file)
    {
        cout << "unable to open CSV file for writing" << endl;
        return;
    }
    for(auto i :rent)
    {
        file<< i->getName() <<"," <<i->getMobile()<<","<<i->getAge()<<","<<i->getBookingId()<<","<<i->getVehicalType()<<","<<i->getPaymentStatus()<<","<< i->getRentalBikeId()<<","<<i->getBikeModel()<<","<<i->getBikeCost()<<","<<i->getBikeStatus()<<","<<i->getBikeDuration()<<endl;
    }
    file.close();
    cout << "Data written to CSV file" << endl;
}
