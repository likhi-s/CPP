#include "bookingmanager.h"

BookingManager::BookingManager()
{
    cout<<"Booking Manager Constructor called"<<endl;
    this->addMovieTheater();
}

BookingManager::~BookingManager()
{
    cout<<"Booking Manager Destructor called"<<endl;
}

void BookingManager::addMovieTheater()
{

    for(int i =1;i<=10;i++)
    {
        m_movietheater.push_back(new MovieTheater (i,i+5,"Available"));
    }

}

void BookingManager::displayTheaterlist()
{
    for(auto theater:m_movietheater)
    {
        if(theater->getStatus() == "Available")
        {
            cout<<"theater number : "<<theater->getNumber()<<" ,number of seats: "<<theater->getseats()<<",Status: "<<theater->getStatus()<<endl;

        }
    }
}


void BookingManager::displayAvailableTheaters(int date)
{
    cout << "Available theaters on April " << date << ":"<<endl;
    vector<int> booked = bookings[date];
    int found =0;
    for (auto theater: m_movietheater)
    {
        for (auto booking : booked)
        {
            if (booking == theater->getNumber())
            {
                found =1;
                break;
            }
        }
        if (found == 0)
        {
                cout << " Theater  " << theater->getNumber() <<" is available"<< endl;

        }

    }
}

void BookingManager::bookTheater(int date, int &theaterNumber)
{
    vector<int>& booked = bookings[date];

    for (auto t : booked)
    {
        if (t == theaterNumber)
        {
            cout << "Theater " << theaterNumber << " is already booked on April " << date << endl;
            return;
        }
    }

    booked.push_back(theaterNumber);
    cout << "Booked Theater: " << theaterNumber << " on April " << date << " successfully"<<endl;
}

