#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outf("ITEM.txt", ios::app);
    cout << "Enter Item Name: ";
    string name;
    cin >> name;
    outf << name << ",";

    cout << "Enter Item Cost: ";
    float cost;
    cin >> cost;
    outf << cost << endl;
    outf.close();


    ifstream inf("ITEM.txt");
    while (getline(inf, name, ',') && (inf>>cost))
    {
        inf.ignore();
        cout << "Item Name: " << name<< " Item Cost: " << cost << endl;

    }


    inf.close();

    cout << "Hello World!" << endl;
    return 0;
}
