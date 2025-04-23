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
    list<Book*>m_bookList;
    list<Student*>m_studentList;

public:
    Library();
    ~Library();
    void addBook();
    void bookBorrowingProcess(Student *student);
    void bookreturningProcess(Student *student);
    void displayBook();
};

#endif // LIBRARY_H
