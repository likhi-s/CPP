#include <iostream>
#include "student.h"
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{

    Student student(1,"likhitha",23);
    cout<<student;


    cout<<" ************************"<<endl;
    unordered_map<string, string> unorderedMap =
        {
        {"ID", "2"},
        {"Name", "Pallavi"},
        {"Age", "23"}
    };
    cout<<unorderedMap;

    set<string> set = {"3","Dharshini","23"};
    cout << "Set: " << set << endl;

    unordered_set<string> unorderedSet = {"4","varshini","23"};
    cout << "Unordered Set: " << unorderedSet << endl;


    cout << "Hello World!" << endl;
    return 0;
}

