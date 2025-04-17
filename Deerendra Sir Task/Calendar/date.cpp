#include "date.h"

Date::Date()
{
    cout<<"Date Constructor Called"<<endl;
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


