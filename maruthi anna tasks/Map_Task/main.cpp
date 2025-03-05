#include <iostream>
#include "state.h"
#include "map"

using namespace std;

int main()
{
    State state("Bengaluru");
    map<string,State>India;
    India.emplace("Karnataka",state);
    for(auto i = India.begin();i!= India.end();i++)
    {
        cout<<"hii"<<endl;
        cout<<"Capital of "<< i->first<<" is "<< i->second<<endl;;
    }

    cout << "Hello World!" << endl;
    return 0;
}
