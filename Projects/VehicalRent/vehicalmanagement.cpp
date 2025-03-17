#include "vehicalmanagement.h"
#include <fstream>


VehicalManagement::VehicalManagement()
{
    cout<<"vehical Management Constructor Called"<<endl;
    FileOperation *fileoperations = new FileOperation;
    m_bikeList = fileoperations->readBikeData();
    m_carList = fileoperations->readCarData();
    m_rentalList = fileoperations->readRentalData();
}

VehicalManagement::~VehicalManagement()
{
    cout<<"vehical Management Destructor Called"<<endl;
    delete fileoperations;
    for(auto i :m_bikeList)
    {
        delete i;
    }
    for(auto i :m_carList)
    {
        delete i;
    }
    for(auto i :m_rentalList)
    {
        delete i;
    }

}

void VehicalManagement::bookBike()
{
    cout<<endl<<"Booking Bike"<<endl;
    cout<<endl<<"Enter Bike Id:"<<endl;
    int bikeId;
    cin>>bikeId;
    int found =0;
    for(auto i : m_bikeList)
    {
        if(i->getBikeId() == bikeId && i->getStatus() == "Available")
        {
            found =1;
            cout<<"Entered Bike Id: "<<bikeId<<" is Available for rent"<<endl;
            cout<<endl<<"Bike Details"<<endl;
            cout<<"Bike Model :"<<i->getModel()<<endl;
            cout<<"Bike Rent :"<<i->getCost()<<endl;
            cout<<"Bike Duration :"<<i->getDuration()<<endl;

            cout<<endl<<"Want to book it ?"<<endl;
            cout<<"Enter"<<endl<< "1.book the Bike"<<endl;
            cout<<"2. Exit"<<endl;
            int choice;
            cin>>choice;
            switch(choice)
            {
            case Book:
            {
                string name,mobile,vehicalType,paymentStatus;
                int age,bookingid;
                cout<<"Enter Name : ";
                cin>>name;
                cout<<"Enter Mobile : ";
                cin>>mobile;
                cout<<"Enter Age : ";
                cin>>age;
                cout<<"Enter Booking Id : ";
                cin>>bookingid;
                cout<<"Enter Vehical Type : ";
                cin>>vehicalType;
                cout<<"Enter Payment Status : ";
                cin>>paymentStatus;
                cout<<endl<<"Your bike is booked"<<endl;
                i->setStatus("Booked");

                string model,status;
                int id,duration;
                float cost;
                id = i->getBikeId();
                model = i->getModel();
                cost = i->getCost();
                status = i->getStatus();
                duration = i->getDuration();

                m_rentalList.push_back(new RentalDetails(name,mobile,age,bookingid,vehicalType,paymentStatus,id, model,cost,status,duration));
                fileoperations->writeRentalData(m_rentalList);

                fileoperations->writeBikeData(m_bikeList);

                break;
            }
            case Exit:
            {
                cout<<"exiting"<<endl;
                return;
            }
            default:
                cout<<"Invalid Option"<<endl;
            }

        }

    }
    if(found ==0 )
    {
        cout<<"Entered Bike ID :"<<bikeId<<" is not available"<<endl;
    }

}

void VehicalManagement::bookCar()
{
    cout<<endl<<"Booking Car"<<endl;
    cout<<endl<<"Enter Car Id:"<<endl;
    int carId;
    cin>>carId;
    int found =0;
    for(auto i : m_carList)
    {
        if(i->getCarId() == carId && i->getStatus() == "Available")
        {
            found = 1;
            cout<<"Entered car Id: "<<carId<<" is Available for rent"<<endl;
            cout<<endl<<"Car Details"<<endl;
            cout<<"Car Model :"<<i->getModel()<<endl;
            cout<<"Car Rent :"<<i->getCost()<<endl;
            cout<<"Car Duration :"<<i->getDuration()<<endl;

            cout<<endl<<"Want to book it ?"<<endl;
            cout<<"Enter"<<endl<< "1.book the Car"<<endl;
            cout<<"2. Exit"<<endl;
            int choice;
            cin>>choice;
            switch(choice)
            {
            case Book:
            {
                string name,mobile,vehicalType,paymentStatus;
                int age,bookingid;
                cout<<"Enter Name : ";
                cin>>name;
                cout<<"Enter Mobile : ";
                cin>>mobile;
                cout<<"Enter Age : ";
                cin>>age;
                cout<<"Enter Booking Id : ";
                cin>>bookingid;
                cout<<"Enter Vehical Type : ";
                cin>>vehicalType;
                cout<<"Enter Payment Status : ";
                cin>>paymentStatus;

                cout<<endl<<"Your car is booked"<<endl;
                i->setStatus("Booked");
                string model,status;
                int id,duration;
                float cost;
                id = i->getCarId();
                model = i->getModel();
                cost = i->getCost();
                status = i->getStatus();
                duration = i->getDuration();

                m_rentalList.push_back(new RentalDetails(name,mobile,age,bookingid,vehicalType,paymentStatus,id, model,cost,status,duration));
                fileoperations->writeRentalData(m_rentalList);

                fileoperations->writeCarData(m_carList);
                break;
            }
            case Exit:
            {
                cout<<"exiting"<<endl;
                return;
            }
            default:
                cout<<"Invalid Option"<<endl;
            }

        }

    }
    if(found == 0)
    {
        cout<<"Entered Car ID :"<<carId<<" is not available"<<endl;
    }
}

void VehicalManagement::returnBike()
{
    cout<<endl<<"Enter Bike Id:"<<endl;
    int bikeId;
    cin>>bikeId;
    int found =0;
    for(auto i : m_bikeList)
    {
        if(i->getBikeId() == bikeId && i->getStatus() == "Booked")
        {
            found =1;
            cout<<endl<<"Bike Details"<<endl;
            cout<<"Bike Model :"<<i->getModel()<<endl;
            cout<<"Bike Rent :"<<i->getCost()<<endl;
            cout<<"Bike Duration :"<<i->getDuration()<<endl;

            cout<<endl<<"Want to return it ?"<<endl;
            cout<<"Enter"<<endl<< "1.return the Bike"<<endl;
            cout<<"2. Exit"<<endl;
            int choice;
            cin>>choice;
            switch(choice)
            {
            case Book:
            {
                cout<<endl<<"Your bike is Returned"<<endl;
                i->setStatus("Available") ;
                break;
            }
            case Exit:
            {
                cout<<"exiting"<<endl;
                return;
            }
            default:
                cout<<"Invalid Option"<<endl;
            }

        }
    }
    if(found ==0)
    {
        cout<<"Enter Bike Id: "<<bikeId<<" is not Booked"<<endl;
    }
}

void VehicalManagement::returnCar()
{
    cout<<endl<<"Enter Car Id:"<<endl;
    int carId;
    cin>>carId;
    int found = 0;
    for(auto i : m_carList)
    {
        if(i->getCarId() == carId && i->getStatus() == "Booked")
        {
            found =1;
            cout<<endl<<"Car Details"<<endl;
            cout<<"Car Model :"<<i->getModel()<<endl;
            cout<<"Car Rent :"<<i->getCost()<<endl;
            cout<<"Car Duration :"<<i->getDuration()<<endl;

            cout<<endl<<"Want to return it ?"<<endl;
            cout<<"Enter"<<endl<< "1.return the Car"<<endl;
            cout<<"2. Exit"<<endl;
            int choice;
            cin>>choice;
            switch(choice)
            {
            case Book:
            {
                cout<<endl<<"Your Car is Returned"<<endl;
                i->setStatus("Available") ;
                break;
            }
            case Exit:
            {
                cout<<"exiting"<<endl;
                return;
            }
            default:
                cout<<"Invalid Option"<<endl;
            }

        }
    }
    if(found ==0)
    {
        cout<<"Enter Car Id: "<<carId<<" is not Booked"<<endl;
    }
}

void VehicalManagement::displayBike()
{

    cout<<"Displaying Bikes"<<endl;
    for(auto i : m_bikeList)
    {
        cout<<"Bike Id: "<<i->getBikeId()<<", Bike Model: "<<i->getModel()<<" ,Bike Cost: "<<i->getCost()<<" ,Bike Status: "<<i->getStatus()<<" ,Bike Duration :"<<i->getDuration()<< " day"<<endl;
    }
}

void VehicalManagement::displayCar()
{
    cout<<"Displaying Cars"<<endl;
    for(auto i : m_carList)
    {
        cout<<"Car Id: "<<i->getCarId()<<", Car Model: "<<i->getModel()<<" ,Car Cost: "<<i->getCost()<<" ,Car Status: "<<i->getStatus()<<" ,Car Duration :"<<i->getDuration()<< " day"<<endl;
    }
}

void VehicalManagement::rentalHistory()
{
    cout<<endl<<"Displaying History "<<endl;

    for(auto i : m_rentalList)
    {
        if(i->getVehicalType() == "Bike")
        {
            cout<<"Customer Name: "<<i->getName() <<", Customer Mobile: "<<i->getMobile()<<", Customer age: "<<i->getAge()<<", Customer Booking Id: "<<i->getBookingId()<<", Vehical Type: "<<i->getVehicalType()<<", Payment Status :"<<i->getPaymentStatus()<<",Bike Id: "<<i->getRentalBikeId()<< ",bike Model: "<<i->getBikeModel() << ",Bike Cost :"<< i->getBikeCost()<<",Bike Status: "<< i->getBikeStatus()<<",Bike Duration :"<<i->getBikeDuration()<<"  day"<<endl;

        }
        if(i->getVehicalType() == "Car")
        {
            cout<<"Customer Name: "<<i->getName() <<", Customer Mobile: "<<i->getMobile()<<", Customer age: "<<i->getAge()<<", Customer Booking Id: "<<i->getBookingId()<<", Vehical Type: "<<i->getVehicalType()<<", Payment Status :"<<i->getPaymentStatus()<<",Car Id: "<<i->getRentalCarId()<< ",Car Model: "<<i->getCarModel() << ",Car Cost :"<< i->getCarCost()<<",Car Status: "<< i->getCarStatus()<<",Car Duration :"<<i->getCarDuration()<<" day"<<endl;

        }


    }

}


void VehicalManagement::addBike()
{
    int id,duration;
    string  model,status;
    float cost;
    cout<<"Enter Bike Id :";
    cin>>id;
    cout<<"Enter Bike Model :";
    cin>>model;
    cout<<"Enter Bike cost :";
    cin>>cost;
    cout<<"Enter Bike status :";
    cin>>status;
    cout<<"Enter Bike Duration :";
    cin>>duration;
    m_bikeList.push_back(new Bike(id,model,cost,status,duration));
    fileoperations->writeBikeData( m_bikeList);
}

void VehicalManagement::addCar()
{
    int id,duration;
    string  model,status;
    float cost;
    cout<<"Enter Car Id :";
    cin>>id;
    cout<<"Enter Car Model :";
    cin>>model;
    cout<<"Enter Car cost :";
    cin>>cost;
    cout<<"Enter Car status :";
    cin>>status;
    cout<<"Enter Car Duration :";
    cin>>duration;
    m_carList.push_back(new Car(id,model,cost,status,duration));
    fileoperations->writeCarData( m_carList);
}

void VehicalManagement::updateCarRent()
{

    this->displayCar();
    int id;
    cout<<"enter the Car Id to Update Rent"<<endl;
    cin>>id;
    for(auto i :m_carList)
    {
        if(i->getCarId() == id)
        {
            float cost;
            cout<<"Enter New Car Rent :";
            cin>>cost;
            i->setCost(cost);
        }
    }
    fileoperations->writeCarData( m_carList);

}

void VehicalManagement::updateBikeRent()
{
    this->displayBike();
    int id;
    cout<<"enter the Bike Id to Update Rent"<<endl;
    cin>>id;
    for(auto i :m_bikeList)
    {
        if(i->getBikeId() == id)
        {
            float cost;
            cout<<"Enter New Bike Rent :";
            cin>>cost;
            i->setCost(cost);
        }
    }

    fileoperations->writeBikeData( m_bikeList);
}

