#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;
class Date
{
public:
    Date();
    ~Date();
    int getDay();
    int getMonth();
    int getYear();

    friend istream& operator>>(istream& in, Date& date)
    {
        cout << "Enter day: ";
        in >> date.m_day;
        cout << "Enter month: ";
        in >> date.m_month;
        cout << "Enter year: ";
        in >> date.m_year;
        return in;
    }
    friend ostream& operator<<(ostream& out,  Date& date)
    {
        out << date.m_day << "-" << date.m_month << "-" << date.m_year;
        return out;
    }

    bool operator<(const Date& date) const
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



private:
    int m_day;
    int m_month;
    int m_year;
};

#endif // DATE_H
