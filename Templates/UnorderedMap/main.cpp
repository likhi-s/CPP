#include <iostream>
#include <unordered_map>
using namespace std;


template <typename K, typename V>
ostream& operator<<(ostream& out, const unordered_map<K, V>& map)
{
    for (const auto& pair : map)
    {
        out << pair.first << " : " << pair.second << "\n";
    }
    return out;
}

int main()
{
    unordered_map<string, int> data={{"Apple",10},{"Banana",5},{"Cherry",15}};
    cout << data;

    return 0;
}
