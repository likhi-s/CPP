#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class Student
{
private:
    string m_name;
    int m_age;
    int m_USN;
    string m_mobileNumber;

public:
    Student();
    ~Student();
    Student(string name, int age, int usn, string number);
    string getName();
    int getAge();
    int getUSN();
    string getMobileNumber();
};

#endif // STUDENT_H
