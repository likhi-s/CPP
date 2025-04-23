#include "librarian.h"
#include "library.h"



Librarian::Librarian()
{
    cout<<"Librarian Constructor Called"<<endl;
}



Librarian::~Librarian()
{
    cout<<"Librarian Destructor Called"<<endl;

}

void Librarian::searchAndIssueBook(Student *student, string bookname, list<Book *> bookList)
{
    int bookFound = 0;
    cout<<student->getStudentName()<<" is Requesting for "<<bookname<<" book"<<endl;

    // for(auto book = bookList.begin(); book != bookList.end();book++)
    // {
    //     if(bookname == (*book)->getBookName() && (*book)->getBookStatus() == "Available")
    //     {
    //         bookFound =1;
    //         cout<<"Entered Book is Available"<<endl;
    //         cout<<"Issuing Book "<<(*book)->getBookName()<<" to "<<student->getStudentName()<<endl;
    //         student->setBook(*book);
    //         bookList.erase(book);
    //         //*book = nullptr;

    //         break;
    //     }
    // }
    for(auto book : bookList)
    {

        if( bookname ==  book->getBookName() && book->getBookStatus() == "Available")
        {
            bookFound =1;
            cout<<"Entered Book is Available"<<endl;
            cout<<"Issuing Book "<<book->getBookName()<<" to "<<student->getStudentName()<<endl;
            student->setBook(book);
            book = nullptr;

            break;
        }
    }

    if(bookFound == 0)
    {
        cout<<"Entered Book Not Found"<<endl;
    }
}

void Librarian::collectBook(Student *student, Book *book, list<Book *> bookList)
{
    cout<<"Before Returning "<<bookList.size()<<endl;
    cout<<student->getStudentName()<<" is Returning "<<book->getBookName()<<" book"<<endl;
    bookList.push_back(book);
    cout<<"After Returning "<<bookList.size()<<endl;
    for(auto a:bookList)
    {
        cout<<a->getBookName()<<endl;
    }

}



