#include "TxtFileOperations.h"

TXTFileOpeartions::TXTFileOpeartions()
{
    cout<<"Txt Constructor Called"<<endl;
}

TXTFileOpeartions::~TXTFileOpeartions()
{
    cout<<"Txt Destructor Called"<<endl;
}
void TXTFileOpeartions::writeData(const list<Student>& students)
{
    ofstream file("students.txt",ios::app);
    if (!file)
    {
        cout << "Error opening file for writing!" << endl;
        return;
    }
    for(const auto &student : students)
    {
        file << student.getName() << " " << student.getAge() << " " << student.getUSN() << " " << student.getMobileNumber() << "\n";

    }
    // for(auto i = students.begin(); i != students.end();i++)
    // {
    //     file<<i->getName() <<","<<i->getAge()<<","<<i->getUSN()<<","<<i->getMobileNumber();
    // }


    file.close();
    cout << "Data written to TXT file " << endl;
}

list<Student> TXTFileOpeartions::readData()
{
    list<Student> students;
    ifstream file("students.txt");
    if (!file)
    {
        cout << "Error opening file for reading!" << endl;
        return students;
    }

    string name, mobile;
    int age, usn;

    while(file >>name >>age >> usn >>mobile)
    {
        students.push_back(Student(name, age, usn, mobile));

    }

    // while (getline(file, name, ',') && file >> age && file.ignore() &&file >> usn && file.ignore() && getline(file, mobile))
    // {
    //     students.push_back(Student(name, age, usn, mobile));

    // }
    file.close();
    return students;
}
