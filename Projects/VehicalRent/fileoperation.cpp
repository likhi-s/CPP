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

    while(file >>id && file.ignore() && getline(file,model,',') && file>>cost && file.ignore() && getline(file,status,',') && file>>duration && file.ignore() )
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

    while(file >>id && file.ignore() && getline(file,model,',') && file>>cost && file.ignore() && getline(file,status,',') && file>>duration && file.ignore() )
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

    string name,mobile,model,status,vehicalType,paymentType,upiId,paymentStatus;
    int age,bookingId,id,duration,transactionId;
    float cost,amount,balance;
    while((getline(file,name,',') && getline(file,mobile,',') && file >> age && file.ignore() && file>> bookingId && file.ignore()  && getline(file,vehicalType,',') && getline(file,paymentType,',') && file>>id && file.ignore() && getline(file,model,',') && file>> cost && file.ignore() && getline(file,status,',') && file>>duration && file.ignore() && getline(file,upiId,',') && file>> amount  && file.ignore() && file >> balance && file.ignore() && getline(file,paymentStatus,',')&& file >> transactionId && file.ignore()))
    {

        if (vehicalType == "Car" && paymentType == "Online")
        {
            Car *car = new Car(id, model, cost, status, duration);
            Online *online = new Online(upiId,amount,balance,paymentStatus,transactionId);
            rentData.push_back(new RentalDetails(name,mobile,age,bookingId,vehicalType,paymentType,car,online));

        }
        if(vehicalType == "Car" && paymentType == "Cash")
        {

            Car *car = new Car(id, model, cost, status, duration);
            Cash *cash = new Cash(upiId,amount,balance,paymentStatus,transactionId);
            rentData.push_back(new RentalDetails(name,mobile,age,bookingId,vehicalType,paymentType,car,cash));


        }
        if (vehicalType == "Bike" && paymentType == "Online")
        {


            Bike *bike = new Bike(id, model, cost, status, duration);
            Online *online = new Online(upiId,amount,balance,paymentStatus,transactionId);
            rentData.push_back(new RentalDetails(name,mobile,age,bookingId,vehicalType,paymentType,bike,online));


        }
        if(vehicalType == "Bike" && paymentType == "Cash")
        {

            Bike *bike = new Bike(id, model, cost, status, duration);
            Cash *cash = new Cash(upiId,amount,balance,paymentStatus,transactionId);
            rentData.push_back(new RentalDetails(name,mobile,age,bookingId,vehicalType,paymentType,bike,cash));


        }

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
    for(auto bikeList :bike)
    {
        file << bikeList->getId()<< "," << bikeList->getModel() << "," << bikeList->getCost() <<"," << bikeList->getStatus() << ","<< bikeList->getDuration()<<endl;

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
    for(auto carList :car)
    {
        file << carList->getId()<< "," << carList->getModel() << "," << carList->getCost() <<"," << carList->getStatus() << ","<< carList->getDuration()<<endl;

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
    for(auto rentList :rent)
    {
        file<< rentList->getName() <<"," <<rentList->getMobile()<<","<<rentList->getAge()<<","<<rentList->getBookingId()<<","<<rentList->getVehicalType()<<","<<rentList->getPaymentType()<<","<< rentList->getId()<<","<<rentList->getModel()<<","<<rentList->getCost()<<","<<rentList->getStatus()<<","<<rentList->getDuration()<<","<<rentList->getUPIid()<<","<<rentList->getAmount()<<","<<rentList->getBalance()<<","<<rentList->getPaymentStatus()<<","<<rentList->getTransactionId()<<","<<endl;
    }
    file.close();
    cout << "Data written to CSV file" << endl;
}


























































































































































































































// void FileOperation::writeOnlineData(list<Online *> &online)
// {
//     ofstream file("OnlinePaymentData.csv");

//     if (!file)
//     {
//         cout << "unable to open CSV file for writing" << endl;
//         return;
//     }
//     for(auto i: online)
//     {
//         file << i->getUPIid()<< "," <<i->getTransactionId()<<endl;
//     }
//     file.close();
//     cout << "Data written to CSV file" << endl;
// }



// void FileOperation::writeCashData(list<Cash *> &cash)
// {
//     ofstream file("CashPaymentData.csv");
//     if (!file)
//     {
//         cout << "unable to open CSV file for writing" << endl;
//         return;
//     }
//     for(auto i: cash)
//     {
//         file << i->getUPIid()<< "," <<i->getTransactionId()<<endl;
//     }
//     file.close();
//     cout << "Data written to CSV file" << endl;
// }

// list<Online *> FileOperation::readOnlineData()
// {
//     list<Online*>onlineData;
//     ifstream file("OnlinePaymentData.csv");
//     if (!file)
//     {
//         cout << "unable to open file  Online Payment Data for reading" << endl;
//         return onlineData;
//     }
//     string upiId;
//     int transactionId;
//     while(getline(file,upiId,',') && file >> transactionId)
//     {
//         onlineData.push_back((new Online(upiId,transactionId)));
//     }

//     file.close();
//     return onlineData;

// }

// list<Cash *> FileOperation::readCashData()
// {

//     list<Cash*>cashData;
//     ifstream file("CashPaymentData.csv");
//     if (!file)
//     {
//         cout << "unable to open file  Online Payment Data for reading" << endl;
//         return cashData;
//     }
//     string upiId;
//     int transactionId;
//     while(getline(file,upiId,',') && file >> transactionId)
//     {
//         cashData.push_back((new Cash(upiId,transactionId)));
//     }

//     file.close();
//     return cashData;
// }
