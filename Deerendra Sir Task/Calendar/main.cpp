#include <iostream>
#include "calendar.h"
#include "movietheater.h"
#include "bookingmanager.h"
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Calendar c;
    //c.displayCalendar();
    MovieTheater m;
    BookingManager b;
    int date;
    cout<<"enter date :";
    cin>>date;
    b.displayAvailableTheaters(date);
    int number;
    cout<<"enter Theater Number :";
    cin>>number;

    b.bookTheater(date,number);



    cout<<"enter date :";
    cin>>date;
    b.displayAvailableTheaters(date);

    cout<<"enter Theater Number :";
    cin>>number;

    b.bookTheater(date,number);
    return 0;
}


