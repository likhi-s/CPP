#include <iostream>
#include "capital.h"
using namespace std;
#include <map>

int main()
{

    map<string,Capital>India;

    Capital capital("bengaluru");
    India.emplace("Karnataka",capital);

    Capital capital1("Hyderabad");
    India.emplace("Telangana",capital1);

    Capital capital2("Amaravathi");
    India.emplace("AndraPradesh",capital2);




    for(auto i = India.begin(); i!= India.end();i++)
    {
        cout<<"Capital of "<<i->first<< " is "<<i->second<<endl;
    }

    cout << "Hello World!" << endl;
    return 0;
}
