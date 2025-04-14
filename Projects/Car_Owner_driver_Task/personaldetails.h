#ifndef PERSONALDETAILS_H
#define PERSONALDETAILS_H
#include <iostream>
using namespace std;

class PersonalDetails
{

protected:
    string m_name;
    string m_address;
    int m_age;
    string m_number;
public:
    PersonalDetails();
   virtual ~PersonalDetails();
    string getName();
    string getAddress();
    int getAge();
    string getNumber();
};

#endif // PERSONALDETAILS_H
