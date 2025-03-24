#include "loginmanagementuser.h"

LoginManagementUser::LoginManagementUser()
{
    cout<<"Login Management User Constructor Called"<<endl;
    RentalFileOperation *m_fileOperations = new RentalFileOperation;
    RentalVehicalManagement *m_rentalVehicalManagement = new RentalVehicalManagement;

    m_adminList = m_fileOperations->readAdminData();
    m_userList = m_fileOperations->readUserDetails();
    // m_rentalVehicalManagement->getBikeList();
    // m_rentalVehicalManagement->getCarList();
    // m_rentalVehicalManagement->getRentalList();
    m_rentalVehicalManagement->displayBike();
    m_rentalVehicalManagement->displayCar();

}

LoginManagementUser::~LoginManagementUser()
{
    cout<<"Login Management User Destructor Called"<<endl;
    delete m_fileOperations;
    for (auto adminList : m_adminList)
    {
        delete adminList;
    }
    for (auto userList : m_userList)
    {
        delete userList;
    }
    delete m_rentalVehicalManagement;

}

void LoginManagementUser::addAdmin()
{
    int loginId = 12345;
    int loginPassword = 12345;
    cout<<"Enter Management loginId"<<endl;
    int id;
    cin>>id;
    cout<<"Enter Management Login Password"<<endl;
    int password;
    cin>>password;

    if(loginId == id && loginPassword == password)
    {
        string adminName;
        int adminId,adminPassword;
        cout<<endl<<"Adding New Admin"<<endl;
        cout<<"Enter Admin Id : "<<endl;
        cin>>adminId;
        cout<<"Enter Admin Name : ";
        cin>>adminName;
        cout<<"Enter Admin Password : ";
        cin>>adminPassword;

        cout<<"Added New Admin :"<<adminName;

        m_adminList.push_back((new AdminDetails(adminName,adminId,adminPassword)));
    }
    else
    {
        cout<<"Enter Correct Login Details"<<endl;
    }


}

void LoginManagementUser::userRegistration()
{
    int userId,userPassword;
    string userName;
    cout<<"Enter User Id: ";
    cin>>userId;
    cout<<"Enter User Name : ";
    cin>>userName;
    cout<<"Enter User Password : ";
    cin>>userPassword;

    cout<<"Registration Successfully Done "<<userName<<" now you can Login";
    m_userList.push_back(new UserDetails(userName,userId,userPassword));
}

void LoginManagementUser::userLogin()
{

    int userId,userPassword;

    while(true)
    {

        cout<<"Enter User ID: ";
        cin>>userId;

        cout<<"Enter User Password : ";
        cin>>userPassword;

        int userFound = 0;

        for(auto userList : m_userList)
        {
            if(userList->getLoginId() == userId && userList->getLoginPassword() == userPassword)
            {
                userFound = 1;
                cout<<endl<<"Login Successfull"<<endl;

                cout<<endl<<"1.Display Vehicals"<<endl<<"2.Book Vehical"<<"3.Sort Vehical"<<endl<<"4.Search Vehical"<<endl;
                cout<<"Enter your choice : ";
                int userChoice;
                cin>>userChoice;
                switch(userChoice)
                {
                case display:
                {
                    cout<<"1.Display Bike"<<endl<<"2.Display Car"<<endl;
                    cout<<"Enter your choice : ";
                    int vehical;
                    cin>>vehical;
                    switch(vehical)
                    {
                    case Bike:
                    {
                        m_rentalVehicalManagement->displayBike();
                        break;
                    }
                    case Car:
                    {
                        m_rentalVehicalManagement->displayCar();
                        break;
                    }
                    }
                    break;
                }
                case book:
                {
                    cout<<"1.Book Bike"<<endl<<"2. Book Car"<<endl;
                    cout<<"Enter your choice : ";
                    int vehical;
                    cin>>vehical;
                    switch(vehical)
                    {
                    case Bike:
                    {
                        m_rentalVehicalManagement->bookBike();
                        break;
                    }
                    case Car:
                    {
                        m_rentalVehicalManagement->bookCar();
                        break;
                    }
                    }
                    break;

                }
                case Sort:
                {
                    cout<<"1.Sort Bike"<<endl<<"2. Sort Car"<<endl;
                    cout<<"Enter your choice : ";
                    int vehical;
                    cin>>vehical;
                    switch(vehical)
                    {
                    case Bike:
                    {
                        m_rentalVehicalManagement->sortBike();
                        break;
                    }
                    case Car:
                    {
                        m_rentalVehicalManagement->sortCar();
                        break;
                    }
                    }
                    break;
                }
                case search:
                {
                    cout<<"1.Search Bike"<<endl<<"2. Search Car"<<endl;
                    cout<<"Enter your choice : ";
                    int vehical;
                    cin>>vehical;
                    switch(vehical)
                    {
                    case Bike:
                    {
                        m_rentalVehicalManagement->searchBike();
                        break;
                    }
                    case Car:
                    {
                        m_rentalVehicalManagement->searchCar();
                        break;
                    }
                    }
                    break;
                }

                }
                break;
            }


        }
        if(userFound == 0)
        {
            cout<<"Incorrect User Login Credentials ,try again"<<endl;
        }
    }

}

void LoginManagementUser::adminLogin()
{
    int userId,userPassword;
    int adminFound = 0;
    while(true)
    {

        cout<<"Enter User ID :";
        cin>>userId;
        cin.ignore();

        cout<<"Enter User Password :";
        cin>>userPassword;
        cin.ignore();

        for (auto adminList : m_adminList)
        {
            int id = adminList->getLoginId();
           int password = adminList->getLoginPassword();
            cout<<" id:"<<id<<endl<<"Pass :"<<password<<endl;
            // if(adminList->getLoginId() == userId && adminList->getLoginPassword() == userPassword)
            if(id == userId && password == userPassword)
            {
                adminFound = 1;
                cout<<endl<<"Login Successfull"<<endl;
                m_rentalVehicalManagement->menu();
                break;
            }

        }
        if (adminFound == 0)
        {
            cout<<"Incorrect Admin Login Credentials,try again"<<endl;
        }
    }
}

void LoginManagementUser::menu()
{


    cout<<endl<<"___________________Login Page___________________"<<endl;
    while(true)
    {
        cout<<endl<<"1.Admin"<<endl<<"2.User"<<endl;
        cout<<"Select Choice"<<endl;
        int login;
        cin>>login;
        switch(login)
        {
        case Admin:
        {
            cout<<"1. Add Admin"<<endl<<"2. Admin Login"<<endl;
            int usecase;
            cin>>usecase;
            switch(usecase)
            {
            case AddAdmin:
            {
                this->addAdmin();
                break;
            }
            case AdminLogin:
            {
                this->adminLogin();
                break;
            }
            }

            break;
        }
        case User:
        {
            cout<<"1.User Registration"<<endl<<"2.User Login"<<endl;
            cout<<"Select Choice"<<endl;
            int user;
            cin>>user;
            switch(user)
            {
            case UserRegistration:
            {
                this->userRegistration();
                break;
            }
            case UserLogin:
            {
                this->userLogin();
                break;
            }
            }

            break;
        }
        case SaveAndExit:
        {
            m_fileOperations->writeAdminData(m_adminList);
            m_fileOperations->writeUserData(m_userList);
            cout<<" saved to file and Exiting "<<endl;

            return;
        }
        }
    }


}


























