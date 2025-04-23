#include "date.h"
#include <string>

Date::Date()
{
    cout<<"Date Constructor Called"<<endl;
}
Date::Date(int day,int month,int year)
{
    m_day = day;
    m_month = month;
    m_year = year;
}

Date::~Date()
{
    cout<<"Date Destructor Called"<<endl;
}

int Date::getDay()
{
    return m_day;
}

int Date::getMonth()
{
    return m_month;
}

int Date::getYear()
{
    return m_year;
}

istream& operator>>(istream& in, Date& date)
{
    int day,month,year;
    while(true)
    {
        cout << "Enter day: ";
        in>>day;
        if(day > 0 && day < 31)
        {
            date.m_day = day;
            break;
        }
        else
        {
            cout<<"InValid day"<<endl;
        }
    }
    while(true)
    {
        cout << "Enter month: ";
        in>>month;
        if(month >0 && month < 13)
        {
            date.m_month = month;
            break;
        }
        else
        {
            cout<<"InValid month"<<endl;

        }
    }
    while(true)
    {
        cout << "Enter year: ";
        in>>year;
        if(year>2024)
        {
            date.m_year = year ;
            break;
        }
        else
        {
            cout<<"InValid Year"<<endl;

        }
    }
    cout<<"Entered Date(DD-MM-YYYY) : "<<date.getDay()<<"-"<<date.getMonth()<<"-"<<date.getYear()<<endl;
    return in;
}

ostream& operator<<(ostream& out,  Date& date)
{
    out << date.m_day << "-" << date.m_month << "-" << date.m_year;
    return out;
}

bool Date:: operator<(const Date& date)const
{
    if (m_year != date.m_year)
    {
        return m_year < date.m_year;
    }
    if (m_month != date.m_month)
    {
        return m_month < date.m_month;
    }
    return m_day < date.m_day;
}

Date Date::getCurrentDate()
{
    time_t now = time(0);
    tm *ltm =localtime(&now);
    return Date(ltm->tm_mday,(1+ltm->tm_mon),(1900+ltm->tm_year));
}
