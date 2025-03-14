#include "vehicalmanagement.h"



VehicalManagement::VehicalManagement()
{
    cout<<"vehical Management Constructor Called"<<endl;
}

VehicalManagement::~VehicalManagement()
{
    cout<<"vehical Management Destructor Called"<<endl;

}

void VehicalManagement::bookBike()
{
    cout<<endl<<"Booking Bike"<<endl;
    cout<<endl<<"Enter Bike Id:"<<endl;
    int bikeId;
    cin>>bikeId;
    for(auto i : m_bikeList)
    {
        if(i->getBikeId() == bikeId)
        {
            cout<<"Entered Bike Id: "<<bikeId<<"is Available for rent"<<endl;
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
                cout<<endl<<"Your bike is booked"<<endl;
                i->getStatus() = "Booked";
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


}

void VehicalManagement::bookCar()
{
    cout<<endl<<"Booking Car"<<endl;
    cout<<endl<<"Enter Car Id:"<<endl;
    int carId;
    cin>>carId;
    for(auto i : m_carList)
    {
        if(i->getCarId() == carId)
        {
            cout<<"Entered car Id: "<<carId<<"is Available for rent"<<endl;
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
                cout<<endl<<"Your car is booked"<<endl;
                i->getStatus() = "Booked";
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
}

void VehicalManagement::returnBike()
{
    cout<<endl<<"Enter Bike Id:"<<endl;
    int bikeId;
    cin>>bikeId;
    for(auto i : m_bikeList)
    {
        if(i->getBikeId() == bikeId)
        {
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
                i->getStatus() = "Available";
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
}

void VehicalManagement::returnCar()
{
    cout<<endl<<"Enter Car Id:"<<endl;
    int carId;
    cin>>carId;
    for(auto i : m_carList)
    {
        if(i->getCarId() == carId)
        {
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
                i->getStatus() = "Available";
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
}

void VehicalManagement::displayBike()
{

    cout<<"Displaying Bikes"<<endl;
    for(auto i : m_bikeList)
    {
        cout<<"Bike Id: "<<i->getBikeId()<<", Bike Model: "<<i->getModel()<<" ,Bike Cost: "<<i->getCost()<<" ,Bike Status: "<<i->getStatus()<<" ,Bike Duration"<<i->getDuration()<<endl;
    }
}

void VehicalManagement::displayCar()
{
    cout<<"Displaying Cars"<<endl;
    for(auto i : m_carList)
    {
        cout<<"Car Id: "<<i->getCarId()<<", Car Model: "<<i->getModel()<<" ,Car Cost: "<<i->getCost()<<" ,Car Status: "<<i->getStatus()<<" ,Car Duration"<<i->getDuration()<<endl;
    }
}

void VehicalManagement::rentalHistory()
{

}

void VehicalManagement::addBike()
{

}

void VehicalManagement::addCar()
{

}

void VehicalManagement::updateCarRent()
{

}

void VehicalManagement::updateBikeRent()
{

}

void VehicalManagement::addBikeList()
{
    FileOperation *fileoperations = new FileOperation;
    fileoperations->writeBikeData();
}
