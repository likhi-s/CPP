#ifndef BOOKINGMANAGER_H
#define BOOKINGMANAGER_H
#include <iostream>
#include "movietheater.h"
#include <list>
#include <vector>

#include<map>
using namespace std;
class BookingManager
{
public:
    BookingManager();
    ~BookingManager();

    void addMovieTheater();
    void displayTheaterlist();
    void displayAvailableTheaters(int date);
    void bookTheater(int date, int &theaterNumber);
private:
    list<MovieTheater*>m_movietheater;
    map<int, vector<int>>bookings;

};

#endif // BOOKINGMANAGER_H












