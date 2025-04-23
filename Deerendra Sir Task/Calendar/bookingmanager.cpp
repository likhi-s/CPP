#include "bookingmanager.h"

BookingManager::BookingManager()
{
    cout<<"Booking Manager Constructor called"<<endl;
    this->addMovieTheater();
}

BookingManager::~BookingManager()
{
    cout<<endl<<"Booking Manager Destructor called"<<endl;
}

void BookingManager::addMovieTheater()
{

    for(int i =1;i<=10;i++)
    {
        //m_movietheaterList.push_back(new MovieTheater (i,i+5,"Available"));
       m_movietheaterList[i] = MovieTheater(i,i+5,"Available");
        //m_movietheaterList.insert(i,MovieTheater(i,i+5,"Available") );

    }


}

void BookingManager::displayTheaterlist()
{
    // for(auto theater: m_movietheaterList)
    // {
    //     if(theater->getStatus() == "Available")
    //     {
    //         cout<<"theater number : "<<theater->getNumber()<<" ,number of seats: "<<theater->getseats()<<",Status: "<<theater->getStatus()<<endl;
    //     }
    // }
    for(auto i = m_movietheaterList; i != m_movietheaterList; ++i)
    {

    }

}


void BookingManager::displayAvailableTheaters(Date date)
{
    cout <<endl<<"Available theaters on " << date << endl;
    vector<theaterId> theaterBooked = m_bookingList[date];
    int found =0;

    for (auto theater : m_movietheaterList)
    {
        found = 0;
        for (auto booked : theaterBooked)
        {
            if (booked == theater->getNumber())
            {
                found = 1;
                break;
            }
        }
        if (found ==0)
        {
            cout << " Theater  " << theater->getNumber() <<" is available"<< endl;

        }
    }
}



void BookingManager::bookTheater(Date date, int &theaterNumber)
{
    vector<theaterId>& theaterBooked = m_bookingList[date];

    for (auto booked : theaterBooked)
    {
        if (booked == theaterNumber)
        {
            cout << "Theater " << theaterNumber << " is already booked on April " << date << endl;
            return;
        }
    }

    theaterBooked.push_back(theaterNumber);
    cout << "Booked Theater: " << theaterNumber << " on April " << date << " successfully"<<endl;

}

