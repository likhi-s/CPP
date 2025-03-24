#ifndef LOGINMANAGEMENTUSER_H
#define LOGINMANAGEMENTUSER_H
#include <list>
#include "userdetails.h"
#include "admindetails.h"
#include "logindetails.h"
#include "Rentalfileoperations.h"
#include "Rentalvehicalmanagement.h"


class LoginManagementUser
{
public:
    LoginManagementUser();
    ~LoginManagementUser();

    void addAdmin();
    void userRegistration();
    void userLogin();
    void adminLogin();
    void menu();

private:
    RentalFileOperation *m_fileOperations;
    RentalVehicalManagement *m_rentalVehicalManagement;
    list<AdminDetails*>m_adminList;
    list<UserDetails*>m_userList;

};



enum userChoice{display =1,book,Sort,search};
enum vehical{Bike =1,Car};
enum login{ Admin = 1,User,SaveAndExit};
enum usecase{AddAdmin =1,AdminLogin};
enum user{UserRegistration =1, UserLogin};
#endif // LOGINMANAGEMENTUSER_H
