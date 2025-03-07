#include "CsvfileOperations.h"

CSVFileOpeartions::CSVFileOpeartions()
{
    cout<<"CSV constructor Called"<<endl;
}
CSVFileOpeartions::~CSVFileOpeartions()
{
    cout<<"CSV Destructor Called"<<endl;
}


void CSVFileOpeartions::writeData(const list<Student>& students)
{
    ofstream file("students.csv",ios::app);
    if (!file)
    {
        cout << "Unable to open  CSV File for writing" << endl;
        return;
    }
    for(const auto &student : students)
    {
        file << student.getName() << "," << student.getAge() << "," << student.getUSN() << "," << student.getMobileNumber() << "\n";

    }
    // for(auto i = students.begin(); i != students.end();i++)
    // {
    //     file<<i->getName() <<","<<i->getAge()<<","<<i->getUSN()<<","<<i->getMobileNumber();
    // }

    file.close();
    cout << "Data written to CSV file" << endl;
}

list<Student> CSVFileOpeartions::readData()
{
    list<Student> students;
    ifstream file("students.csv");
    if (!file)
    {
        cout << "unable to open CSV file for reading" << endl;
        return students;
    }

    string name, mobile;
    int age, usn;

    while (getline(file, name, ',') && file >> age && file.ignore() &&file >> usn && file.ignore() && getline(file, mobile))
    {
        students.push_back(Student(name, age, usn, mobile));
    }

    file.close();
    return students;
}
