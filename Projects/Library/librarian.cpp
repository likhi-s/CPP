#include "librarian.h"



Librarian::Librarian()
{

}



Librarian::~Librarian()
{

}





void Librarian::searchAndIssueBook(list<Student*>&studentList,list<Book*>&bookList)
{

    list<Book*>booklist;
    booklist = bookList;
    int bookFound = 0;
    int bookNumber;

    cout<<"Enter Book Number to search:"<<endl;
    cin>>bookNumber;

    for(auto book : bookList)
    {
        if(book->getBookNumber() == bookNumber && book->getBookStatus() == "Available")
        {
            bookFound =1;
            cout<<"Entered Book Available"<<endl;
            string name,department;
            cout<<"Enter Student Name "<<endl;
            cin>>name;
            cout<<"Enter Student Department"<<endl;
            cin>>department;
            studentList.push_back(new Student (name,department,book));
            cout<<"Issuing Book "<<book->getBookName()<<" to "<<name<<endl;
            book->setBookStatus("Not Available");
            break;
        }

    }
    if(bookFound == 0)
    {
        cout<<"Entered Book Not Found"<<endl;
    }

}


