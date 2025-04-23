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
    Student(string studentName, string department);
    string getStudentName();
    string getDepartment();
    void setBook(Book *book);
    string requestBook();
    Book *getBook() ;
    Book *returnBook();
};

#endif // STUDENT_H
