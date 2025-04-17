#include <iostream>
#include "calendar.h"
#include "movietheater.h"
#include "bookingmanager.h"
using namespace std;
enum choice{DisplayTheaterlist = 1,BookTheater,Exit};


int main()
{
    cout << "Hello World!" << endl;
    Calendar c;
    c.displayCalendar();
    MovieTheater m;
    BookingManager b;
    Date date;
    while(true)
    {
        int choice;
        cout<<endl<<"1.DisplayTheaterlist"<<endl<<"2.BookTheater"<<endl<<"3.Exit"<<endl;
        cout<<endl<<"Enter Your Choice :";
        cin>>choice;
        switch(choice)
        {
        case DisplayTheaterlist:
        {
            b.displayTheaterlist();
        }
        break;
        case BookTheater:
        {
            cout<<endl<<"Enter date :";
            cin>>date;
            cout<<"Selected Date: "<<date.getDay()<<"/"<<date.getMonth()<<"/"<<date.getYear()<<endl;
            b.displayAvailableTheaters(date);
            int number;
            cout<<endl<<"Enter Theater Number :";
            cin>>number;
            b.bookTheater(date,number);
            break;
        }
        case Exit:
            return 0;

        }
    }


    return 0;
}


