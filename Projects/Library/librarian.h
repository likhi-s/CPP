#ifndef LIBRARIAN_H
#define LIBRARIAN_H
#include <iostream>
using namespace std;
#include <list>
#include "book.h"
#include "student.h"
class Librarian
{

public:
    Librarian();
    ~Librarian();


    void searchAndIssueBook(list<Student *> &studentList, list<Book *> &bookList);
};

#endif // LIBRARIAN_H
