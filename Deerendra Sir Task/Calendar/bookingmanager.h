#ifndef BOOKINGMANAGER_H
#define BOOKINGMANAGER_H
#include <iostream>
#include "movietheater.h"
#include <vector>
#include<map>
#include "date.h"
using namespace std;
//using date = int ;
//typedef int date;
class BookingManager
{
public:
    BookingManager();
    ~BookingManager();

    void addMovieTheater();
    void displayTheaterlist();
    void displayAvailableTheaters(Date date);
    void bookTheater(Date date, int &theaterNumber);


private:
    vector<MovieTheater*>m_movietheaterList;
    map<Date, vector<int>>m_bookingList;
    map<vector<int>,MovieTheater>m_movietheaters;

};

#endif // BOOKINGMANAGER_H












