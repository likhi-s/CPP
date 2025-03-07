#include <iostream>
#include <fstream>
#include "student.h"
using namespace std;

int main()
{
    Student s("Likhitha",23,8);
    s.writeToFile("student.txt");
    s.readFromFile("student.txt");
    cout << "Hello World!" << endl;
    return 0;
}
