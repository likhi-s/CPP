#include "library.h"

Library::Library()
{
    cout<<"Library Constructor Called"<<endl;
    m_librarian = new Librarian;
    this->addBook();
}

Library::~Library()
{
    cout<<"Library Destructor Called"<<endl;

}

void Library::addBook()
{

    m_bookList.push_back(new Book ("c","Author1","Available",1));
    m_bookList.push_back(new Book ("c++","Author2","Available",2));
    m_bookList.push_back(new Book ("python","Author3","Available",3));
    m_bookList.push_back(new Book ("java","Author4","Available",4));
    this->displayBook();

}
void Library::displayBook()
{
    for(auto book:m_bookList)
    {
        cout<<book->getBookName()<<" "<<book->getBookNumber()<<" "<<book->getAuthorName()<<endl;
    }
}



void Library :: bookBorrowingProcess(Student *student)
{

    string m_bookName = student->requestBook();
    m_librarian->searchAndIssueBook(student,m_bookName,m_bookList);
}

void Library::bookreturningProcess(Student *student)
{
    Book *book = student->returnBook();
    m_librarian->collectBook(student,book,m_bookList);
}
