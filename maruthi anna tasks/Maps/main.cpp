#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string,string>India;
    India.insert({"Karnataka","Bengaluru"});
    India.emplace("TamilNadu","Chennai");
    India.emplace("AndraPradesh","Amaravathi");
    India.emplace("Telengana","Hyderabad");
    India["Delhi"]= "NewDelhi";

    for(auto i = India.begin();i!= India.end();i++)
    {
        cout<<"Capital of "<<i->first<<" is "<<i->second<<endl;;
    }

    cout<<"Enter the State"<<endl;
    string state;
    cin>>state;
    cout<<"Capital of "<<state<<" is :"<<India[state]<<endl;

    cout << "Hello World!" << endl;
    return 0;
}
