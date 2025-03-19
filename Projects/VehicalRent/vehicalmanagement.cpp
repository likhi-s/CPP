#include "vehicalmanagement.h"
#include <fstream>
#include <iomanip>
#include <string>

VehicalManagement::VehicalManagement()
{
    cout<<"vehical Management Constructor Called"<<endl;
    FileOperation *m_fileoperations = new FileOperation;
    m_bikeList = m_fileoperations->readBikeData();
    m_carList = m_fileoperations->readCarData();
    m_rentalList = m_fileoperations->readRentalData();
}

VehicalManagement::~VehicalManagement()
{
    cout<<"vehical Management Destructor Called"<<endl;
    delete m_fileoperations;
    for(auto bikeList :m_bikeList)
    {
        delete bikeList;
    }
    for(auto carList :m_carList)
    {
        delete carList;
    }
    for(auto rentalList :m_rentalList)
    {
        delete rentalList;
    }

}

void VehicalManagement::menu()
{
    while(true)
    {
        cout<<endl<<"1.Add Vehical"<<endl<<"2.Book Vehical"<<endl<<"3.Return Vehical"<<endl<<"4.Display Vehical"<<endl<<"5.Update Vehical Rent"<<endl;
        cout<<"6.Display Rental History"<<endl<<"7.Delete Vehical"<<endl<<"8.Search Vehical"<<endl<<"9.Sort Vehical"<<endl<<"10.Exit"<<endl;

        cout<<endl<<"Enter Your Choice : ";
        int option;
        cin>>option;
        switch(option)
        {
        case AddVehical:
        {
            cout<<endl<<"1.Bike"<<endl<<"2.Car"<<endl;
            cout<<endl<<"Select your Choice :";
            int select;
            cin>>select;
            switch(select)
            {
            case BIKE:   
                this->addBike();
                break;

            case CAR:
                this->addCar();
                break;

            default:
                cout<<"Invalid Choice"<<endl;
                break;
            }
            break;
        }
        case BookVehical:
        {
            cout<<endl<<"1.Bike"<<endl<<"2.Car"<<endl;
            cout<<endl<<"Select your Choice: ";
            int select;
            cin>>select;
            switch(select)
            {
            case BIKE:
                this->bookBike();
                break;

            case CAR:
                this->bookCar();
                break;

            default:
                cout<<"Invalid Choice"<<endl;
                break;
            }
            break;
        }
        case ReturnVehical:
        {
            cout<<endl<<"1.Bike"<<endl<<"2.Car"<<endl;
            cout<<endl<<"Select your choice: ";
            int select;
            cin>>select;
            switch(select)
            {
            case BIKE:
                this->returnBike();
                break;

            case CAR:
                this->returnCar();
                break;

            default:
                cout<<"Invalid Choice"<<endl;
                break;
            }
            break;
        }
        case DisplayVehical:
        {

            cout<<endl<<"1.Bike"<<endl<<"2.Car"<<endl;
            cout<<endl<<"Select your Choice:";
            int select;
            cin>>select;
            switch(select)
            {
            case BIKE:
                this->displayBike();
                break;
            case CAR:
                this->displayCar();
                break;
            default:
                cout<<"Invalid Choice"<<endl;
                break;
            }
            break;

        }
        case UpdateVehicalRent:
        {
            cout<<endl<<"1.Bike"<<endl<<"2.Car"<<endl;
            cout<<endl<<"Select your Choice: ";
            int select;
            cin>>select;
            switch(select)
            {
            case BIKE:
                this->updateBikeRent();
                break;

            case CAR:
                this->updateCarRent();
                break;

            default:
                cout<<"Invalid Choice"<<endl;
                break;
            }
            break;
        }
        case DisplayHistory:
            this->rentalHistory();
            break;
        case DeleteVehical:
        {
            cout<<endl<<"1.Bike"<<endl<<"2.Car"<<endl;
            cout<<endl<<"Select your Choice:";
            int select;
            cin>>select;
            switch(select)
            {
            case BIKE:
                this->deleteBike();
                break;

            case CAR:
                this->deleteCar();
                break;

            default:
                cout<<"Invalid Choice"<<endl;
                break;
            }
            break;
        }
        case SearchVehical:
        {
            cout<<endl<<"1.Bike"<<endl<<"2.Car"<<endl;
            cout<<endl<<"Select your Choice: ";
            int select;
            cin>>select;
            switch(select)
            {
            case BIKE:
                this->searchBike();
                break;

            case CAR:
                this->searchCar();
                break;

            default:
                cout<<"Invalid Choice"<<endl;
                break;
            }
            break;
        }
        case SortVehical:
        {
            cout<<endl<<"1.Bike"<<endl<<"2.Car"<<endl;
            cout<<endl<<"Select your Choice: ";
            int select;
            cin>>select;
            switch(select)
            {
            case BIKE:
                this->sortBike();
                break;
            case CAR:
                this->sortCar();
                break;
            default:
                cout<<"Invalid Choice"<<endl;
                break;
            }
            break;
        }

        case EXIT:
        {
            m_fileoperations->writeBikeData(m_bikeList);
            m_fileoperations->writeCarData(m_carList);
            m_fileoperations->writeRentalData(m_rentalList);
            cout<<" saved to file and Exiting "<<endl;
            return;
        }
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
    for(auto bikeList : m_bikeList)
    {
        if(bikeList->getId() == bikeId && bikeList->getStatus() == "Booked")
        {
            found =1;
            cout<<"Entered Bike ID : "<<bikeId<<" is already booked"<<endl;
        }
        if(bikeList->getId() == bikeId && bikeList->getStatus() == "Available")
        {
            found =1;
            cout<<"Entered Bike Id: "<<bikeId<<" is Available for rent"<<endl;
            cout<<endl<<"Bike Details"<<endl;
            cout<<"Bike Model :"<<bikeList->getModel()<<endl;
            cout<<"Bike Rent :"<<bikeList->getCost()<<endl;
            cout<<"Bike Duration :"<<bikeList->getDuration()<<" Day"<<endl;

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


                while(true)
                {
                    cout<<"Enter Mobile Number: ";
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

                int count =1;
                for(auto rentalList = m_rentalList.begin();rentalList != m_rentalList.end();rentalList++)
                {
                    count++;
                }

                bookingid = count;
                cout<<endl<<"Booking Id : "<<count<<endl;
                vehicalType = "Bike";
                cout<<"vehical Type :"<<vehicalType<<endl;


                cout<<endl<<"Available Payment Modes"<<endl;
                cout<<endl<<"1.online"<<endl<<"2.Cash"<<endl;

                cout<<endl<<"Select PaymentMode : " ;
                int paymentmode;
                cin>>paymentmode;
                switch(paymentmode)
                {
                case Online:
                {
                    string paymentMode = "online";
                    cout<<endl<<"Payment Mode :" <<paymentMode<<endl;

                    cout<<endl<<"Enter UPI id : ";
                    string upiId;
                    cin>>upiId;

                    int transactionId;
                    int transactioncount = 1;
                    for(auto rentalList = m_rentalList.begin();rentalList != m_rentalList.end();rentalList++)
                    {
                        transactioncount++;
                    }
                    transactionId = transactioncount + 10000;
                    cout<<"transaction Id : "<<transactionId <<endl;

                    paymentStatus = "Paid";
                    cout<<"Payment Status : "<<paymentStatus<<endl;

                    cout<<endl<<"Your "<<bikeList->getModel()<<"bike is booked and Completed Payment throught Upi : "<<upiId<<" and your transaction Number is : "<<transactionId<<endl;
                    bikeList->setStatus("Booked");
                    int id = bikeList->getId();
                    string model = bikeList->getModel();
                    float cost = bikeList->getCost();
                    string status = bikeList->getStatus();
                    int duration  =bikeList->getDuration();

                    Bike *bike = new Bike(id, model, cost, status, duration);
                    m_rentalList.push_back(new RentalDetails(name,mobile,age,bookingid,vehicalType,paymentMode,upiId,transactionId,paymentStatus,bike));

                    break;
                }

                case Cash:
                {
                    string paymentMode = "Cash";
                    cout<<endl<<"Payment Mode :" <<paymentMode<<endl;
                    cout<<" Cash Recived"<<endl;
                    string upiId = "Nill";
                    int transactionId = 0;

                    paymentStatus = "Paid";
                    cout<<"Payment Status : "<<paymentStatus<<endl;



                    cout<<endl<<"You booked  "<<bikeList->getModel()<<"bike and Completed Payment throught Upi : "<<upiId<<" and your transaction Number is : "<<transactionId<<endl;
                    bikeList->setStatus("Booked");


                    int id = bikeList->getId();
                    string model = bikeList->getModel();
                    float cost = bikeList->getCost();
                    string status = bikeList->getStatus();
                    int duration  =bikeList->getDuration();

                    Bike *bike = new Bike(id, model, cost, status, duration);
                    m_rentalList.push_back(new RentalDetails(name,mobile,age,bookingid,vehicalType,paymentMode,upiId,transactionId,paymentStatus,bike));

                    break;

                }

                }


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
    for(auto carList : m_carList)
    {
        if(carList->getId() == carId && carList->getStatus() == "Booked")
        {
            found = 1;
            cout<<"Entered Car ID : "<<carId<<" is already booked"<<endl;


        }
        if(carList->getId() == carId && carList->getStatus() == "Available")
        {
            found = 1;
            cout<<"Entered car Id: "<<carId<<" is Available for rent"<<endl;
            cout<<endl<<"Car Details"<<endl;
            cout<<"Car Model :"<<carList->getModel()<<endl;
            cout<<"Car Rent :"<<carList->getCost()<<endl;
            cout<<"Car Duration :"<<carList->getDuration()<<" Day"<<endl;

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
                int count =1;

                for(auto rentalList = m_rentalList.begin();rentalList != m_rentalList.end();rentalList++)
                {
                    count++;
                }
                bookingid = count;
                cout<<endl<<"Booking Id : "<<count<<endl;


                vehicalType = "Car";
                cout << "Vehical Type :"<<vehicalType<<endl;

                cout<<endl<<"Available Payment Modes"<<endl;
                cout<<endl<<"1.online"<<endl<<"2.Cash"<<endl;

                cout<<endl<<"Select PaymentMode : " ;
                int paymentmode;
                cin>>paymentmode;
                switch(paymentmode)
                {
                case Online:
                {
                    string paymentMode = "online";
                    cout<<endl<<"Payment Mode :" <<paymentMode<<endl;

                    cout<<endl<<"Enter UPI id : ";
                    string upiId;
                    cin>>upiId;

                    int transactionId;
                    int transactioncount = 1;
                    for(auto rentalList = m_rentalList.begin();rentalList != m_rentalList.end();rentalList++)
                    {
                        transactioncount++;
                    }
                    transactionId = transactioncount + 10000;
                    cout<<"transaction Id : "<<transactionId <<endl;

                    paymentStatus = "Paid";
                    cout<<"Payment Status : "<<paymentStatus<<endl;

                    cout<<endl<<"You booked " <<carList->getModel()<<" Car and Completed Payment throught Upi : "<<upiId<<" and your transaction Number is : "<<transactionId<<endl;
                    carList->setStatus("Booked");
                    int id = carList->getCost();
                    string model = carList->getModel();
                    float cost = carList->getCost();
                    string status = carList->getStatus();
                    int duration  = carList->getDuration();


                    Car *car = new Car(id, model, cost, status, duration);
                    m_rentalList.push_back(new RentalDetails(name,mobile,age,bookingid,vehicalType,paymentMode,upiId,transactionId,paymentStatus,car));



                    break;
                }
                case Cash:
                {
                    string paymentMode = "Cash";
                    cout<<endl<<"Payment Mode :" <<paymentMode<<endl;
                    cout<<" Cash Recived"<<endl;
                    string upiId = "Nill";
                    int transactionId = 0;

                    paymentStatus = "Paid";
                    cout<<"Payment Status : "<<paymentStatus<<endl;
                    cout<<endl<<"You booked " <<carList->getModel()<<" Car and Completed Payment throught Upi : "<<upiId<<" and your transaction Number is : "<<transactionId<<endl;
                    carList->setStatus("Booked");
                    int id = carList->getCost();
                    string model = carList->getModel();
                    float cost = carList->getCost();
                    string status = carList->getStatus();
                    int duration  = carList->getDuration();


                    Car *car = new Car(id, model, cost, status, duration);
                    m_rentalList.push_back(new RentalDetails(name,mobile,age,bookingid,vehicalType,paymentMode,upiId,transactionId,paymentStatus,car));

                    break;
                }
                }
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
    for(auto bikeList : m_bikeList)
    {
        if(bikeList->getId() == bikeId && bikeList->getStatus() == "Available")
        {
            found =1;
            cout<<"Entered Bike Id: "<<bikeId<<"  not yet Booked"<<endl;
        }
        if(bikeList->getId() == bikeId && bikeList->getStatus() == "Booked")
        {
            found =1;
            cout<<endl<<"Bike Details"<<endl;
            cout<<"Bike Model :"<<bikeList->getModel()<<endl;
            cout<<"Bike Rent :"<<bikeList->getCost()<<endl;
            cout<<"Bike Duration :"<<bikeList->getDuration()<<endl;

            cout<<endl<<"Want to return it ?"<<endl;
            cout<<"Enter"<<endl<< "1.return the Bike"<<endl;
            cout<<"2. Exit"<<endl;
            int returnVehical;
            cin>>returnVehical;
            switch(returnVehical)
            {
            case Return:
            {

                cout<<endl<<"Your "<<bikeList->getModel()<<" bike is Returned"<<endl;
                bikeList->setStatus("Available");

                break;
            }
            case exiT:
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
        cout<<"Entered Bike Id: "<<bikeId<<" is not Available"<<endl;
    }

}

void VehicalManagement::returnCar()
{
    cout<<endl<<"Enter Car Id:"<<endl;
    int carId;
    cin>>carId;
    int found = 0;
    for(auto carList : m_carList)
    {
        if(carList->getId() == carId && carList->getStatus() == "Available")
        {
            found =1;
            cout<<"Entered Car Id: "<<carId<<"  not yet Booked"<<endl;

        }
        if(carList->getId() == carId && carList->getStatus() == "Booked")
        {
            found =1;
            cout<<endl<<"Car Details"<<endl;
            cout<<"Car Model :"<<carList->getModel()<<endl;
            cout<<"Car Rent :"<<carList->getCost()<<endl;
            cout<<"Car Duration :"<<carList->getDuration()<<endl;

            cout<<endl<<"Want to return it ?"<<endl;
            cout<<"Enter"<<endl<< "1.return the Car"<<endl;
            cout<<"2. Exit"<<endl;
            int returnVehical;
            cin>>returnVehical;
            switch(returnVehical)
            {
            case Return:
            {
                cout<<endl<<"Your"<<carList->getModel()<<"Car is Returned"<<endl;
                carList->setStatus("Available") ;
                break;
            }
            case exiT:
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
        cout<<"Entered Car Id: "<<carId<<" is not available"<<endl;
    }
}

void VehicalManagement::displayBike()
{
    cout<<endl<<"****************************************Displaying Bikes*************************************************"<<endl <<endl;

    cout<< endl<<setw(15)<<"Bike Id "<<setw(15)<<"Bike Model "<<setw(15)<<"Bike Cost "<<setw(15)<<"Bike Status"<<setw(25)<<"Bike Duration"<<endl<<endl;

    for(auto bikeList : m_bikeList)
    {
        if(bikeList->getStatus() != "Deleted")
        {
            cout<<setw(15)<<bikeList->getId()<<setw(15)<<bikeList->getModel()<<setw(15)<<bikeList->getCost()<<setw(15)<<bikeList->getStatus()<<setw(15)<<bikeList->getDuration()<<" Day"<<endl;

        }
    }
}

void VehicalManagement::displayCar()
{
    cout<<endl<<"****************************************Displaying Cars*************************************************"<<endl <<endl;

    cout<< endl<<setw(15)<<"Car Id "<<setw(15)<<"Car Model "<<setw(15)<<"Car Cost "<<setw(15)<<"Car Status"<<setw(25)<<"Car Duration"<<endl<<endl;

    for(auto carList : m_carList)

    {
        if(carList->getStatus() != "Deleted")
        {
            cout<<setw(15)<<carList->getId()<<setw(15)<<carList->getModel()<<setw(15)<<carList->getCost()<<setw(15)<<carList->getStatus()<<setw(15)<<carList->getDuration()<< " Day"<<endl;
        }

    }
}

void VehicalManagement::rentalHistory()
{
    cout<<endl<<"****************************************Displaying History*************************************************"<<endl <<endl;

    cout<< endl<<setw(20)<<"Customer_Name"<<setw(20)<<"Customer_Mobile "<<setw(20)<<"Customer_Age "<<setw(20)<<"Customer_Booking_Id"<<setw(20)<<"Vehical_Type"<<setw(20)<<"Payment_Mode"<<setw(20)<<"UPI_Id"<<setw(20)<<"Transaction_ID"<<setw(20)<<"Payment_Status"<<setw(20)<<"Vehical_Id"<<setw(20)<<"Vehical_Model"<<setw(20)<<"Vehical_Cost"<<setw(20)<<"Vehical_Status"<<setw(20)<<"Vehical_Duration"<<endl<<endl;

    for(auto rentalList : m_rentalList)
    {
        cout<<setw(20)<<rentalList->getName() <<setw(15)<<rentalList->getMobile()<<setw(20)<<rentalList->getAge()<<setw(20)<<rentalList->getBookingId()<<setw(20)<<rentalList->getVehicalType()<<setw(20)<<rentalList->getPaymentMode()<<setw(25)<<rentalList->getUPIid()<<setw(20)<<rentalList->getTransactionId()<<setw(20)<<rentalList->getPaymentStatus()<<setw(20)<<rentalList->getId()<< setw(20)<<rentalList->getModel() << setw(20)<<rentalList->getCost()<<setw(20)<< rentalList->getStatus()<<setw(15)<<rentalList->getDuration()<<"  day"<<endl;

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
        for(auto bikeList : m_bikeList)
        {
            if(bikeList->getId() == id)
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
        for(auto carList : m_carList)
        {
            if(carList->getId() == id)
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
    int bikeFound =0;
    for(auto bikeList :m_bikeList)
    {
        if(bikeList->getId() == id)
        {
            bikeFound =1;
            float cost;
            cout<<"Enter New Bike Rent :";
            cin>>cost;
            bikeList->setCost(cost);
        }
    }
    if(bikeFound ==0 )
    {
        cout<<endl<<"Entered Bike ID "<< id <<" not found"<<endl;
    }
}


void VehicalManagement::updateCarRent()
{

    this->displayCar();
    int id;
    cout<<"enter the Car Id to Update Rent"<<endl;
    cin>>id;
    int carFound = 0;
    for(auto carList :m_carList)
    {
        if(carList->getId() == id)
        {
            carFound =1;
            float cost;
            cout<<"Enter New Car Rent :";
            cin>>cost;
            carList->setCost(cost);
        }
    }
    if(carFound ==0)
    {
        cout<<endl<<"Entered Car ID "<< id <<" not found"<<endl;

    }

}



void VehicalManagement::deleteBike()
{
    this->displayBike();
    int id;
    cout<<"Enter Bike Id to Delete : ";
    cin>>id;
    int bikeFound = 0;

    for(auto bikeList : m_bikeList)
    {
        if(bikeList->getId() == id)
        {
            bikeFound =1;
            bikeList->setStatus("Deleted");
            cout<<"Entered Bike ID: "<<id <<" Deleted"<<endl;
        }
    }
    if(bikeFound == 0)
    {
        cout<<endl<<"Entered Bike ID "<< id <<" not found"<<endl;
    }
}

void VehicalManagement::deleteCar()
{
    this->displayCar();
    int id;
    cout<<"Enter Car Id to Delete : ";
    cin>>id;
    int carFound = 0;

    for(auto carList : m_carList)
    {
        if(carList->getId() == id)
        {
            carFound =1;
            carList->setStatus("Deleted");
            cout<<"Entered Car ID: "<<id <<" Deleted"<<endl;

        }
    }
    if(carFound == 0)
    {
        cout<<endl<<"Entered car ID "<< id <<" not found"<<endl;
    }
}

void VehicalManagement::searchBike()
{

    int id;
    cout<<"Enter Bike Id to Search : ";
    cin>>id;
    int bikeFound = 0;

    for(auto bikeList : m_bikeList)
    {
        if(bikeList->getId() == id)
        {
            bikeFound =1;
            cout<<endl<<"Entered Bike ID: "<<id <<" Found"<<endl;
            cout<<endl<<"Bike Details"<<endl;
            cout<<endl<<"Bike Id :"<<bikeList->getId()<<endl;
            cout<<"Bike Model :"<<bikeList->getModel()<<endl;
            cout<<"Bike Rent :"<<bikeList->getCost()<<endl;
            cout<<"Bike Status :"<<bikeList->getStatus()<<endl;
            cout<<"Bike Duration :"<<bikeList->getDuration()<<" Day"<<endl;

        }
    }
    if(bikeFound == 0)
    {
        cout<<endl<<"Entered Bike ID "<< id <<" not found"<<endl;
    }
}

void VehicalManagement::searchCar()
{
    int id;
    cout<<"Enter Car Id to Delete : ";
    cin>>id;
    int carFound = 0;

    for(auto carList : m_carList)
    {
        if(carList->getId() == id)
        {
            carFound =1;
            cout<<endl<<"Entered Car ID: "<<id <<" Found"<<endl;

            cout<<endl<<"Car Details"<<endl;
            cout<<endl<<"Car Id :"<<carList->getId()<<endl;
            cout<<"Car Model :"<<carList->getModel()<<endl;
            cout<<"Car Rent :"<<carList->getCost()<<endl;
            cout<<"Car Status :"<<carList->getStatus()<<endl;
            cout<<"Car Duration :"<<carList->getDuration()<<"Day"<<endl;;
        }
    }
    if(carFound == 0)
    {
        cout<<endl<<"Entered car ID "<< id <<" not found"<<endl;
    }
}

void VehicalManagement::sortBike()
{
    cout<<endl<<"Available Sorting Types"<<endl;
    cout<<endl<<"1.Sort By Vehical Status"<<endl<<"2.Sort By Vehical Price"<<endl<<"3.Sort By Vehical Name"<<endl;
    cout<<endl<<"Enter Required Sorting Type : ";
    int sort;
    cin>>sort;
    switch(sort)
    {
    case VehicalStatus:
    {
        this->sortBikeByStatus();
        break;
    }
    case VehicalRent:
    {
        this->sortBikeByPrice();

        break;
    }
    case VehicalName:
    {
        this->sortBikeByName();
        break;
    }
    }
    this->displayBike();

}

void VehicalManagement::sortCar()
{
    cout<<endl<<"Available Sorting Types"<<endl;
    cout<<endl<<"1.Sort By Vehical Status"<<endl<<"2.Sort By Vehical Price"<<endl<<"3.Sort By Vehical Name"<<endl;
    cout<<endl<<"Enter Required Sorting Type : ";
    int sort;
    cin>>sort;
    switch(sort)
    {
    case VehicalStatus:
    {
        this->sortCarByStatus();

        break;
    }
    case VehicalRent:
    {
        this->sortCarByPrice();

        break;
    }
    case VehicalName:
    {
        this->sortCarByName();
        break;
    }
        this->displayCar();
    }
}

void VehicalManagement::sortBikeByPrice()
{
    for(auto i: m_bikeList)
    {
        for(auto j  : m_bikeList)
        {
            if (i->getCost() < j->getCost())
            {
                iter_swap(i,j);
            }
        }
    }
}

void VehicalManagement::sortBikeByName()
{

    for(auto i : m_bikeList)
    {
        for(auto j : m_bikeList)
        {
            if(i->getModel() < j->getModel())
            {
                iter_swap(i,j);
            }
        }

    }
}

void VehicalManagement::sortBikeByStatus()
{
    for(auto i :  m_bikeList)
    {
        for(auto j :  m_bikeList)
        {
            if(i->getStatus() == "Available" && j->getStatus() != "Available")
            {
                iter_swap(i,j);
            }
            if(i->getStatus() == "Available" && j->getStatus() == "Booked")
            {
                iter_swap(i,j);
            }
        }
    }


}

void VehicalManagement::sortCarByPrice()
{
    for(auto i : m_carList)
    {
        for(auto j : m_carList)
        {
            if (i->getCost() < j->getCost())
            {
                iter_swap(i,j);
            }
        }
    }
}

void VehicalManagement::sortCarByName()
{
    for(auto i : m_carList)
    {
        for(auto j : m_carList)
        {
            if(i->getModel() < j->getModel())
            {
                iter_swap(i,j);
            }
        }

    }
}

void VehicalManagement::sortCarByStatus()
{
    for(auto i : m_carList)
    {
        for(auto j : m_carList)
        {
            if(i->getStatus() == "Available" && j->getStatus() != "Available")
            {
                iter_swap(i,j);
            }
            if(i->getStatus() == "Available" && j->getStatus() == "Booked")
            {
                iter_swap(i,j);
            }
        }
    }
}



