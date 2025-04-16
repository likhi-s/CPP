#include "calendar.h"
#include <iomanip>

Calendar::Calendar()
{
    cout<<"Calendar Constructor Called"<<endl;
}

Calendar::~Calendar()
{
    cout<<"Calendar Destructor Called"<<endl;

}

void Calendar::displayCalendar()
{

    cout<<endl<<setw(35)<<m_month<<" "<<m_year<<endl<<endl;

    for(int i=0;i<7;i++)
    {
        cout<<setw(10)<<m_week[i]<<setw(10);
    }
    cout<<endl<<endl;

    for(int i=1;i<=3;i++)
    {
        cout<<setw(10)<<" "<<setw(10);
        if(m_week[i] == "Tuesday")
        {
            for(int j =1;j<=30;j++)
            {
                cout<<setw(10)<<j<<setw(10);
                if(j==5 || j==12 || j==19 || j==26)
                {
                    cout<<endl;
                }
            }
        }
    }
}

void Calendar::displayCurrentDate()
{


}



































































// time_t now = time(0);
// tm *ltm =localtime(&now);
// int day = ltm->tm_mday;
// int month = 1+ltm->tm_mon;
// int year = 1900+ltm->tm_year;
// cout<<day<<"/"<<month<<"/"<<year<<" "<<endl;
