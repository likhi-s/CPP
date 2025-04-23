#include <iostream>
#include "library.h"
using namespace std;
enum choice{BookBorrowProcess=1, BookReturnProcess,Exit};

int main()
{
    Library library;
    Student *student = new Student("Likhitha","eng");
    while(true)
    {
        int choice;
        cout<<endl<<"1.Book Borrowing Process"<<endl<<"2.Book Returning Process"<<endl<<"3.Exit"<<endl;
        cout<<"Enter Choice:";
        cin>>choice;
        switch(choice)
        {
        case BookBorrowProcess:
            library.bookBorrowingProcess(student);
            break;
        case BookReturnProcess:
            library.bookreturningProcess(student);
            break;
        case Exit:
            delete student;
            return 0;

        }
    }


    return 0;
}


