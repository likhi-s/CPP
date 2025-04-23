#ifndef CALENDAR_H
#define CALENDAR_H
#include <vector>
#include "year.h"
#include <iostream>
using namespace std;

class Calendar
{

public:
    Calendar();
    ~Calendar();
    void displayCalendar(Month *month, Year *year);
    void displayCurrentDate();
    int getStartDay(int month,int year);
    void calendarNavigation();
    int getCurrentDate();
};

#endif // CALENDAR_H
