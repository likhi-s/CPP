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
    void displayCalendar(Month *month, Year *year);
    void displayCurrentDate();
    int getStartDay(int month,int year);
    int getCurrentDate();
    void calendarNavigation();
    void setBookingManager(BookingManager *bookingManager);
private:
    BookingManager *m_bookingManager;
};

#endif // CALENDAR_H
