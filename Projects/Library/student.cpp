#include "student.h"

Book *Student::getBook()
{
    return m_book;
}

Student::Student()
{
    cout<<"Student constructor called"<<endl;
}

Student::Student(string studentName, string department)
{
    m_studentName = studentName;
    m_department = department;

}

string Student::getStudentName()
{
    return m_studentName;

}

string Student::getDepartment()
{
    return m_department;
}

void Student::setBook(Book *book)
{
    m_book = book;
    cout<<"book "<<m_book->getBookName()<<" author " << m_book->getAuthorName()<<endl;

}

string Student::requestBook()
{
    cout<<"Requesting for book"<<endl;
    string bookName;
    cout<<"Enter Book Name"<<endl;
    cin>>bookName;

    return bookName;
}

Book* Student::returnBook()
{
    cout<<"Returning "<<m_book->getBookName()<<" back"<<endl;
    return m_book;
}
