#include "loginmanagementuser.h"

LoginManagementUser::LoginManagementUser()
{
    cout<<"Login Management User Constructor Called"<<endl;
}

LoginManagementUser::~LoginManagementUser()
{
    cout<<"Login Management User Destructor Called"<<endl;

}

void LoginManagementUser::addAdmin()
{
    int loginId = 12345;
    string loginPassword = "12345";
    cout<<"Enter Management loginId"<<endl;
    int id;
    cin>>id;
    cout<<"Enter Management Login Password"<<endl;
    string password;
    cin>>password;

    if(loginId == id && loginPassword == password)
    {

    }


}
