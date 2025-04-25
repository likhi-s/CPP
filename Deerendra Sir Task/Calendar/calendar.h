#ifndef CALENDAR_H
#define CALENDAR_H
#include <vector>
#include "bookingmanager.h"
#include "year.h"
#include <iostream>
using namespace std;

class Calendar
{

public:
    Calendar();
    ~Calendar();
    void displayCalendar(Month *month, Year *year, BookingManager& bookingManager);
    void displayCurrentDate();
    int getStartDay(int month,int year);
    int getCurrentDate();
    void calendarNavigation(BookingManager& bookingManager);
};

#endif // CALENDAR_H
