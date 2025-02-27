#ifndef STUDENTMANAGEMENT_H
#define STUDENTMANAGEMENT_H
#include <iostream>
using namespace std;

class StudentManagement
{
    string m_name;
    int m_age;
    int m_USN;
    string m_mobileNumber;
public:
    StudentManagement();
    ~StudentManagement();
    void addstudent(string name, int age, int usn, string number);
    string getname();
    int getage();
    int getusn();
    string getnumber();



};

#endif // STUDENTMANAGEMENT_H
