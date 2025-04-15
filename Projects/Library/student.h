#ifndef STUDENT_H
#define STUDENT_H
#include <list>
#include <iostream>
#include "book.h"
using namespace std;

class Student
{
private:
    string m_studentName;
    string m_department;
    Book *m_book;

public:
    Student();
    Student(string studentName,string department,Book *book );
    string getStudentName();
    string getDepartment();
    string requestBook();
};

#endif // STUDENT_H
