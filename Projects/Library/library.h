#ifndef LIBRARY_H
#define LIBRARY_H
#include <iostream>
using namespace std;
#include "librarian.h"
#include "student.h"
#include "book.h"
#include <list>

class Library
{
private:
    Librarian *m_librarian;
    Student *m_student;
    list<Book*>m_bookList;
    list<Student*>m_studentList;

public:
    Library();
    ~Library();
    void addBook();
    void bookBorrowingProcess();
};

#endif // LIBRARY_H
