#ifndef LOGINMANAGEMENTUSER_H
#define LOGINMANAGEMENTUSER_H
#include <list>
#include "userdetails.h"
#include "admindetails.h"
#include "logindetails.h"
#include "Rentalfileoperations.h"
class LoginManagementUser
{
public:
    LoginManagementUser();
    ~LoginManagementUser();

    void addAdmin();
    void userLogin();
    void adminLogin();
    void userSignUp();

private:
    RentalFileOperation *m_fileOperations;
    list<AdminDetails*>m_adminList;
    list<UserDetails*>m_userList;
};

#endif // LOGINMANAGEMENTUSER_H
