#include <iostream>
#include "capital.h"
#include "state.h"
#include <map>

using namespace std;

int main()
{
    map<State,Capital>India;


    India.emplace("Karnataka","bengaluru");

    for(auto i = India.begin(); i!= India.end();i++)
    {
        cout<<"Capital of "<<i->first<< " is "<<i->second<<endl;
    }
    cout << "Hello World!" << endl;
    return 0;
}
