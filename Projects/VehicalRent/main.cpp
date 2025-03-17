#include <iostream>
#include "fileoperation.h"
#include "vehical.h"
#include "vehicalmanagement.h"
using namespace std;

enum option{AddBike =1,AddCar,BookBike,BookCar,DisplayBike,DisplayCar,UpdateBikeRent,UpdateCarRent,DisplayHistory,EXIT};
int main()
{
    VehicalManagement vehicalManagement;
    while(true)
    {
        cout<<endl<<"1.Add Bike"<<endl<<"2.Add Car"<<endl<<"3.Book Bike"<<endl<<"4.Book Car"<<endl<<"5.Display Bike"<<endl;
        cout<<"6.Display Car"<<endl<<"7.Update Bike Rent"<<endl<<"8.Update Car Rent"<<endl<<"9.Display Rental History"<<endl<<"10.Exit"<<endl;

        cout<<endl<<"Enter Choice"<<endl;
        int option;
        cin>>option;
        switch(option)
        {
        case AddBike:
            vehicalManagement.addBike();
            break;
        case AddCar:
            vehicalManagement.addCar();
            break;
        case BookBike:
            vehicalManagement.bookBike();
            break;
        case BookCar:
            vehicalManagement.bookCar();
            break;
        case DisplayBike:
            vehicalManagement.displayBike();
            break;
        case DisplayCar:
            vehicalManagement.displayCar();
            break;
        case UpdateBikeRent:
            vehicalManagement.updateBikeRent();
            break;
        case UpdateCarRent:
            vehicalManagement.updateCarRent();
            break;
        case DisplayHistory:
            vehicalManagement.rentalHistory();
            break;
        case EXIT:
            cout<<"Exiting "<<endl;
            return 0;
        default:
            cout<<"Invalid Choice"<<endl;
            break;

        }
    }



    cout << "Hello World!" << endl;
    return 0;
}







// list<Bike >bikeList;
// bikeList.push_back(Bike(1,"Activa",1500,"Available",1));
// bikeList.push_back(Bike(1,"FZ",2000,"Available",1));
// bikeList.push_back(Bike(1,"Royal",2000,"Available",1));
// bikeList.push_back(Bike(1,"Honda",1000,"Available",1));

// fop.writeBikeData(bikeList);

// list<Car>carList;
// carList.push_back(Car(1,"toyota",4000,"Available",1));
// carList.push_back(Car(1,"Suzuki",3500,"Available",1));
// carList.push_back(Car(1,"Benz",5000,"Available",1));
// carList.push_back(Car(1,"Tata",4000,"Available",1));
// fop.writeCarData(carList);



// FileOperation fop;
// list<Bike*>bikeList;
// bikeList.push_back(new Bike(1,"Activa",1500,"Available",1));
// bikeList.push_back(new Bike(1,"FZ",2000,"Available",1));
// bikeList.push_back(new Bike(1,"Royal",2000,"Available",1));
// bikeList.push_back(new Bike(1,"Honda",1000,"Available",1));

// fop.writeBikeData(bikeList);

// list<Car*>carList;
// carList.push_back(new Car(1,"toyota",4000,"Available",1));
// carList.push_back(new Car(1,"Suzuki",3500,"Available",1));
// carList.push_back(new Car(1,"Benz",5000,"Available",1));
// carList.push_back(new Car(1,"Tata",4000,"Available",1));
// fop.writeCarData(carList);
