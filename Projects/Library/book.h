#ifndef BOOK_H
#define BOOK_H
#include <list>
#include <iostream>
using namespace std;

class Book
{
private:
    string m_bookName;
    string m_author;
    string m_status;
    int m_bookNumber;



public:
    Book();
    int getBookNumber();
    string getBookName();
    string getAuthorName();
    string getBookStatus();
    void setBookStatus(string status);


    Book(string name, string author, string status, int number);
};

#endif // BOOK_H
