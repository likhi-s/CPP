#include "library.h"

Library::Library()
{
    m_librarian = new Librarian;
    this->addBook();
}

Library::~Library()
{

}

void Library::addBook()
{
    for(int i =0;i<5;i++)
    {
        m_bookList.push_back(new Book ("c","Author","Available",1));
    }
}

void Library :: bookBorrowingProcess()
{
   string m_bookName = m_student->requestBook();
    cout<<"Student Requested for Book "<<m_bookName<<endl;
    m_librarian->searchAndIssueBook(m_studentList,m_bookList);
}
