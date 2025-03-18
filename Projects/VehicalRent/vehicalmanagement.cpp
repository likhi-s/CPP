#include "vehicalmanagement.h"
#include <fstream>
#include <iomanip>
#include <string>


enum option{AddVehical=1,BookVehical,ReturnVehical,DisplayVehical,UpdateVehicalRent,DisplayHistory,EXIT};
enum select{BIKE =1,CAR};
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

void VehicalManagement::operations()
{
    while(true)
    {
        cout<<endl<<"1.Add Vehical"<<endl<<"2.Book Vehical"<<endl<<"3.Return Vehical"<<endl<<"4.Display Vehical"<<endl<<"5.Update Vehical Rent"<<endl;
        cout<<"6.Display Rental History"<<endl<<"7.Exit"<<endl;

        cout<<endl<<"Enter Choice"<<endl;
        int option;
        cin>>option;
        switch(option)
        {
        case AddVehical:
        {
            cout<<"1.Bike"<<endl<<"2.Car"<<endl;
            cout<<"Select:"<<endl;
            int select;
            cin>>select;
            switch(select)
            {
            case BIKE:
                addBike();
                break;
            case CAR:
                addCar();
                break;
            default:
                cout<<"Invalid Choice"<<endl;
                break;
            }
            break;
        }
        case BookVehical:
        {
            cout<<"1.Bike"<<endl<<"2.Car"<<endl;
            cout<<"Select:"<<endl;
            int select;
            cin>>select;
            switch(select)
            {
            case BIKE:
                bookBike();
                break;
            case CAR:
                bookCar();
                break;
            default:
                cout<<"Invalid Choice"<<endl;
                break;
            }
            break;
        }
        case ReturnVehical:
        {
            cout<<"1.Bike"<<endl<<"2.Car"<<endl;
            cout<<"Select:"<<endl;
            int select;
            cin>>select;
            switch(select)
            {
            case BIKE:
                returnBike();
                break;
            case CAR:
                returnCar();
                break;
            default:
                cout<<"Invalid Choice"<<endl;
                break;
            }
            break;
        }
        case DisplayVehical:
        {

            cout<<"1.Bike"<<endl<<"2.Car"<<endl;
            cout<<"Select:"<<endl;
            int select;
            cin>>select;
            switch(select)
            {
            case BIKE:
                displayBike();
                break;
            case CAR:
                displayCar();
                break;
            default:
                cout<<"Invalid Choice"<<endl;
                break;
            }
            break;

        }
        case UpdateVehicalRent:
        {
            cout<<"1.Bike"<<endl<<"2.Car"<<endl;
            cout<<"Select:"<<endl;
            int select;
            cin>>select;
            switch(select)
            {
            case BIKE:
                updateBikeRent();
                break;
            case CAR:
                updateCarRent();
                break;
            default:
                cout<<"Invalid Choice"<<endl;
                break;
            }
            break;
        }
        case DisplayHistory:
            rentalHistory();
            break;
        case EXIT:
            fileoperations->writeBikeData(m_bikeList);
            fileoperations->writeCarData(m_carList);
            fileoperations->writeRentalData(m_rentalList);
            cout<<" saved to file and Exiting "<<endl;
            return;
        default:
            cout<<"Invalid Choice"<<endl;
            break;

        }

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
        if(i->getId() == bikeId && i->getStatus() == "Available")
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
                while(true)
                {
                    cout<<"Enter Name : ";
                    cin>>name;
                    break;
                    // if(name >= 'A' || name >= 'a' && name <= 'Z' || name <= 'z')
                    // {
                    //     break;
                    // }
                    // else
                    // {
                    //     cout<<"Invalid Name,try again"<<endl;

                    // }
                }


                while(true)
                {
                    cout<<"Enter Mobile Number(10 digits) : ";
                    cin>>mobile;
                    if(mobile.length()==10)
                    {
                        break;
                    }
                    else
                    {
                        cout<<"Invalid number,try again"<<endl;
                    }
                }

                while(true)
                {
                    cout<<"Enter Age : ";
                    cin>>age;
                    if(age >=18 && age < 90)
                    {
                        break;
                    }
                    else
                    {
                        cout<<"Invalid Age,age must be positive and in between 17-90,try again"<<endl;
                    }
                }

                cout<<"Enter Booking Id : ";
                cin>>bookingid;
                vehicalType = "Bike";
                cout<<"vehical Type :"<<vehicalType<<endl;


                cout<<"Enter Payment Status : ";
                cin>>paymentStatus;

                cout<<endl<<"Your bike is booked"<<endl;
                i->setStatus("Booked");

                string model,status;
                int id,duration;
                float cost;
                id = i->getId();
                model = i->getModel();
                cost = i->getCost();
                status = i->getStatus();
                duration = i->getDuration();

                m_rentalList.push_back(new RentalDetails(name,mobile,age,bookingid,vehicalType,paymentStatus,id, model,cost,status,duration));


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
        if(i->getId() == bikeId && i->getStatus() == "Booked")
        {
            found =1;
            cout<<"Entered Bike ID : "<<bikeId<<" is already booked"<<endl;
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
        if(i->getId() == carId && i->getStatus() == "Available")
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
                while(true)
                {
                    cout<<"Enter Mobile number(10 digits): ";
                    cin>>mobile;
                    if(mobile.length()==10)
                    {
                        break;
                    }
                    else
                    {
                        cout<<"Invalid Number,try again"<<endl;
                    }
                }

                while(true)
                {
                    cout<<"Enter Age : ";
                    cin>>age;
                    if(age>=18 && age<= 90)
                    {
                        break;
                    }
                    else
                    {
                        cout<<"Invalid Age,age must be positive and in between 17-90,try again"<<endl;
                    }
                }

                cout<<"Enter Booking Id : ";
                cin>>bookingid;

                vehicalType = "Car";
                cout << "Vehical Type :"<<vehicalType<<endl;

                cout<<"Enter Payment Status : ";
                cin>>paymentStatus;

                cout<<endl<<"Your car is booked"<<endl;
                i->setStatus("Booked");
                string model,status;
                int id,duration;
                float cost;
                id = i->getId();
                model = i->getModel();
                cost = i->getCost();
                status = i->getStatus();
                duration = i->getDuration();

                m_rentalList.push_back(new RentalDetails(name,mobile,age,bookingid,vehicalType,paymentStatus,id, model,cost,status,duration));

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
        if(i->getId() == carId && i->getStatus() == "Booked")
        {
            found = 1;
            cout<<"Entered Car ID : "<<carId<<" is already booked"<<endl;


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
        if(i->getId() == bikeId && i->getStatus() == "Booked")
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
        if(i->getId() == bikeId && i->getStatus() == "Available")
        {
            found =1;
            cout<<"Entered Bike Id: "<<bikeId<<"  not yet Booked"<<endl;
        }

    }
    if(found ==0)
    {
        cout<<"Entered Bike Id: "<<bikeId<<" is not Available"<<endl;
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
        if(i->getId() == carId && i->getStatus() == "Booked")
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
        if(i->getId() == carId && i->getStatus() == "Available")
        {
            found =1;
            cout<<"Entered Car Id: "<<carId<<"  not yet Booked"<<endl;

        }

    }
    if(found ==0)
    {
        cout<<"Entered Car Id: "<<carId<<" is not available"<<endl;
    }
}

void VehicalManagement::displayBike()
{
    cout<<endl<<"****************************************Displaying Bikes*************************************************"<<endl <<endl;

    cout<< endl<<setw(15)<<"Bike Id "<<setw(15)<<"Bike Model "<<setw(15)<<"Bike Cost "<<setw(15)<<"Bike Status"<<setw(25)<<"Bike Duration"<<endl<<endl;

    for(auto i : m_bikeList)
    {
        cout<<setw(15)<<i->getId()<<setw(15)<<i->getModel()<<setw(15)<<i->getCost()<<setw(15)<<i->getStatus()<<setw(15)<<i->getDuration()<<" Day"<<endl;
        //cout<<cout.width(15)<<i->getBikeId()<<cout.width(15)<<i->getModel()<<cout.width(15)<<i->getCost()<<cout.width(15)<<i->getStatus()<<cout.width(15)<<i->getDuration()<<cout.width(25)<<endl;
    }
}

void VehicalManagement::displayCar()
{
    cout<<endl<<"****************************************Displaying Cars*************************************************"<<endl <<endl;

    cout<< endl<<setw(15)<<"Car Id "<<setw(15)<<"Car Model "<<setw(15)<<"Car Cost "<<setw(15)<<"Car Status"<<setw(25)<<"Car Duration"<<endl<<endl;

    for(auto i : m_carList)

    {
        cout<<setw(15)<<i->getId()<<setw(15)<<i->getModel()<<setw(15)<<i->getCost()<<setw(15)<<i->getStatus()<<setw(15)<<i->getDuration()<< " Day"<<endl;
    }
}

void VehicalManagement::rentalHistory()
{
    cout<<endl<<"****************************************Displaying History*************************************************"<<endl <<endl;

    cout<< endl<<setw(20)<<"Customer_Name"<<setw(20)<<"Customer_Mobile "<<setw(20)<<"Customer_Age "<<setw(20)<<"Customer_Booking_Id"<<setw(20)<<"Vehical_Type"<<setw(20)<<"Payment_Status"<<setw(20)<<"Vehical_Id"<<setw(20)<<"Vehical_Model"<<setw(20)<<"Vehical_Cost"<<setw(20)<<"Vehical_Status"<<setw(20)<<"Vehical_Duration"<<endl<<endl;

    for(auto i : m_rentalList)
    {
        if(i->getVehicalType() == "Bike")
        {

            cout<<setw(25)<<i->getName() <<setw(15)<<i->getMobile()<<setw(20)<<i->getAge()<<setw(20)<<i->getBookingId()<<setw(20)<<i->getVehicalType()<<setw(20)<<i->getPaymentStatus()<<setw(20)<<i->getId()<< setw(20)<<i->getModel() << setw(20)<< i->getCost()<<setw(20)<< i->getStatus()<<setw(15)<<i->getDuration()<<"  day"<<endl;

            // cout<<setw(20)<<i->getName() <<setw(20)<<i->getMobile()<<setw(20)<<i->getAge()<<setw(20)<<i->getBookingId()<<setw(20)<<i->getVehicalType()<<setw(20)<<i->getPaymentStatus()<<setw(20)<<i->getRentalBikeId()<< setw(20)<<i->getBikeModel() << setw(20)<< i->getBikeCost()<<setw(20)<< i->getBikeStatus()<<setw(20)<<i->getBikeDuration()<<"  day"<<setw(20)<<endl;

        }
        if(i->getVehicalType() == "Car")
        {
            cout<<setw(20)<<i->getName() <<setw(15)<<i->getMobile()<<setw(20)<<i->getAge()<<setw(20)<<i->getBookingId()<<setw(20)<<i->getVehicalType()<<setw(20)<<i->getPaymentStatus()<<setw(20)<<i->getId()<< setw(20)<<i->getModel() << setw(20)<< i->getCost()<<setw(20)<< i->getStatus()<<setw(15)<<i->getDuration()<<"  day"<<endl;

            //cout<<"Customer Name: "<<i->getName() <<", Customer Mobile: "<<i->getMobile()<<", Customer age: "<<i->getAge()<<", Customer Booking Id: "<<i->getBookingId()<<", Vehical Type: "<<i->getVehicalType()<<", Payment Status :"<<i->getPaymentStatus()<<",Car Id: "<<i->getRentalCarId()<< ",Car Model: "<<i->getCarModel() << ",Car Cost :"<< i->getCarCost()<<",Car Status: "<< i->getCarStatus()<<",Car Duration :"<<i->getCarDuration()<<" day"<<endl;

        }
    }
}


void VehicalManagement::addBike()
{
    int id,duration;
    string  model,status;
    float cost;

    while(true)
    {
        int count = 0;

        cout<<"Enter Bike Id :";
        cin>>id;
        for(auto i : m_bikeList)
        {
            if(i->getId() == id)
            {
                count = 1;
            }

        }
        if(count == 0)
        {
            break;
        }
        else
        {
            cout<<"Entered Bike Id already Exists,try with different Id"<<endl;
        }
    }

    cout<<"Enter Bike Model :";
    cin>>model;
    cout<<"Enter Bike cost :";
    cin>>cost;
    cout<<"Enter Bike status :";
    cin>>status;
    cout<<"Enter Bike Duration :";
    cin>>duration;
    m_bikeList.push_back(new Bike(id,model,cost,status,duration));
}

void VehicalManagement::addCar()
{
    int id,duration;
    string  model,status;
    float cost;

    while(true)
    {
        int count = 0;

        cout<<"Enter Car Id :";
        cin>>id;
        for(auto i : m_carList)
        {
            if(i->getId() == id)
            {
                count = 1;
            }

        }
        if(count == 0)
        {
            break;
        }
        else
        {
            cout<<"Entered Car Id already Exists,try with different Id"<<endl;
        }
    }


    cout<<"Enter Car Model :";
    cin>>model;
    cout<<"Enter Car cost :";
    cin>>cost;
    cout<<"Enter Car status :";
    cin>>status;
    cout<<"Enter Car Duration :";
    cin>>duration;
    m_carList.push_back(new Car(id,model,cost,status,duration));
}

void VehicalManagement::updateBikeRent()
{
    this->displayBike();
    int id;
    cout<<"enter the Bike Id to Update Rent"<<endl;
    cin>>id;
    for(auto i :m_bikeList)
    {
        if(i->getId() == id)
        {
            float cost;
            cout<<"Enter New Bike Rent :";
            cin>>cost;
            i->setCost(cost);
        }
    }
}
void VehicalManagement::updateCarRent()
{

    this->displayCar();
    int id;
    cout<<"enter the Car Id to Update Rent"<<endl;
    cin>>id;
    for(auto i :m_carList)
    {
        if(i->getId() == id)
        {
            float cost;
            cout<<"Enter New Car Rent :";
            cin>>cost;
            i->setCost(cost);
        }
    }

}




