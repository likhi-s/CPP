#include "calendar.h"
#include <iomanip>
#include <conio.h>

Calendar::Calendar()
{
    cout<<"Calendar Constructor Called"<<endl;

}

Calendar::~Calendar()
{
    cout<<"Calendar Destructor Called"<<endl;


}

void Calendar::displayCalendar(Month *month, Year *year)
{
    system("cls");
    int startDay = getStartDay(month->getMonth(), year->getYear());
    int totalDays = month->getDaysInMonth(year->getYear());
    cout<<endl<<setw(30)<< "  " << month->getMonthName() << " " << year->getYear() << endl<<endl;

    cout <<setw(10)<< "Sunday"<<setw(10)<< "Monday" <<setw(10)<<"Tuesday"<<setw(10)<< "Wednesday" <<setw(10)<<"Thursday" <<setw(10)<<"Friday" <<setw(10)<<"Saturday" <<setw(10)<< endl<<endl;

    for (int i = 0; i < startDay; ++i)
    {
        cout <<setw(10)<< "    ";
    }

    for (int d = 1; d <= totalDays; ++d)
    {
        cout << setw(10) << d ;
        if ((d + startDay) % 7 == 0)
        {
            cout << endl;
        }
    }
}

void Calendar::displayCurrentDate()
{
    time_t now = time(0);
    tm *ltm =localtime(&now);
    string months[] = {"January", "February", "March", "April", "May", "June ","July", "August", "September", "October", "November", "December"};

    cout<<endl<<endl<<"Current Date: "<<ltm->tm_mday<<" "<<months[1+ltm->tm_mon]<<" "<<(1900+ltm->tm_year)<<" "<<endl<<endl;

}

int Calendar::getStartDay(int month, int year)
{
    if (month < 3)
    {
        month += 12;
        year--;
    }
    int k = year % 100;
    int j = year / 100;
    int h = (1 + 13*(month + 1)/5 + k + k/4 + j/4 + 5*j) % 7;
    return (h + 6) % 7;

}


void Calendar::calendarNavigation()
{
    time_t now = time(0);
    tm *ltm =localtime(&now);
    int month = (1+ltm->tm_mon);
    int year = (1900+ltm->tm_year);
    while (true)
    {
        Month m(month);
        Year y(year);
        this->displayCalendar(&m, &y);
        this->displayCurrentDate();
        cout <<endl<<endl<< "Press < for previous month, > for next month, esc to exit." <<endl<< endl;

        char ch = _getch();
        if (ch == 27)
        {
            break;
        }
        else if (ch == 75)
        {
            month--;
            if (month < 1)
            {
                month = 12;
                year--;
            }
        }
        else if (ch == 77)
        {
            month++;
            if (month > 12)
            {
                month = 1;
                year++;
            }
        }
    }
}


