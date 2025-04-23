#ifndef LIBRARIAN_H
#define LIBRARIAN_H
#include <iostream>
using namespace std;
#include <vector>
#include "book.h"
#include "student.h"
class Librarian
{

public:
    Librarian();
    ~Librarian();
    void searchAndIssueBook(Student *student, string bookname , list<Book*> bookList);
    void collectBook(Student *student, Book *book, list<Book*> bookList);
};

#endif // LIBRARIAN_H
