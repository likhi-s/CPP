#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student
{

public:
    int *m_age;
    string *m_contactNumber;
    Student();
    ~Student();
    void printMe();
};

#endif // STUDENT_H
