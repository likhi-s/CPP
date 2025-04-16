#ifndef CALENDAR_H
#define CALENDAR_H
#include <iostream>
using namespace std;

class Calendar
{

public:
    Calendar();
    ~Calendar();
    void displayCalendar();
    void displayCurrentDate();

private:
    int m_year = 2025;
    string m_month = "APRIL";
    string m_week[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

};

#endif // CALENDAR_H
