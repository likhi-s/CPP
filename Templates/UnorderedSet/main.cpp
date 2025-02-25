#include <iostream>
#include <unordered_set>
using namespace std;

template <typename T>
ostream& operator<<(ostream& out, const unordered_set<T>& set) {
    for (const auto& element : set)
    {
        out << element << "\n";
        //out << element.first << ":"<< element.second<<"\n";
        // out << element.first << ":"<< element.second.first<<","<<element.second.second<<"\n";

    }
    return out;
}

int main()
{
    unordered_set<string> fruits = {"Apple", "Banana", "Cherry", "Mango"};
   //unordered_set<pair<string,int>> fruits ={{"Apple",10},{"Mango",25},{"Banana",5},{"Cherry",15}};
    // set<pair<int,pair<string,int>>> fruits ={{1,{"Apple",10}},{2,{"Mango",25}},{3,{"Banana",5}},{4,{"Cherry",15}}};

    cout << fruits;

    return 0;
}
