#include "student.h"

Student::Student() {}

Student::Student(string studentName, string department, Book *book)
{
    m_studentName = studentName;
    m_department = department;
    m_book = book;
}

string Student::getStudentName()
{
    return m_studentName;

}

string Student::getDepartment()
{
    return m_department;
}

string Student::requestBook()
{
    cout<<"Requesting for book"<<endl;

    string bookName;
    cout<<"Enter Book Name"<<endl;
    cin>>bookName;

    return bookName;
}
