#include "book.h"

Book::Book() {}

Book::Book(string name, string author, string status,int number)
{
    m_bookName = name;
    m_author = author;
    m_status = status;
    m_bookNumber = number;
}

int Book::getBookNumber()
{
    return m_bookNumber;
}

string Book::getBookName()
{
    return m_bookName;
}

string Book::getAuthorName()
{
    return m_author;
}

string Book::getBookStatus()
{
    return m_status;
}
void Book::setBookStatus(string status)
{
    m_status = status;
}
