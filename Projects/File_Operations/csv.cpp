#include "csv.h"
#include <fstream>
#include <sstream>

CSV::CSV()
{

    cout << "CSV Constructor Called" << endl;
}

CSV::~CSV()
{
    cout << "CSV Destructor Called" << endl;
}
void CSV::writeToFile(const string& filename)
{

    ofstream outFile(filename, ios::app);

    if (outFile.is_open())
    {
        outFile << m_name<< "," << m_age << "," << m_grade << endl;
        outFile.close();
        cout << "Data written to file successfully." << endl;
    }
    else
    {
        cout <<"file is not opened"<< endl;
    }
}
void CSV::readFromFile(const string& filename)
{
    ifstream inFile(filename);

    if (inFile.is_open())
    {
        string line;
        cout << "Reading the data from file" << endl;

        while (getline(inFile, line))
        {
            stringstream data(line);
            string name;
            int age;
            float grade;
            getline(data, name, ',');
            data >> age;
            data.ignore();
            data>> grade;
            cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << endl;
        }
        inFile.close();
    }
    else
    {
        cout <<"file is not opened"<< endl;
    }
}
























// list<Student> CSV::readData()
// {
//     list<Student>studentList;
//     ifstream inf("ITEM.txt");
//     while (getline(inf, name, ',',age,',') && (inf>>cost))
//     {
//         inf.ignore();
//         cout << "Item Name: " << name<< " Item Cost: " << cost << endl;

//     }
//     inf.close();
//     ofstream outf("ITEM.txt", ios::app);

//     for(int i =0;i<10;i++)
//     {
//         cout<<"Enter Student Name:"<<endl;
//         string name;
//         cin>>name;
//         outf<<name<<",";

//         cout<<"Enter Student Age:"<<endl;
//         int age;
//         cin>>age;
//         outf<<age<<",";

//         cout<<"Enter Student USN:"<<endl;
//         int usn;
//         cin>>usn;
//         outf<<usn<<",";

//         cout<<"Enter Student Mobile Number:"<<endl;
//         string number;
//         cin>>number;
//         outf<<number<<",";


//         studentList.push_back(Student(name,age,usn,number));
//     }

//         return studentList;

// }
// void CSV::writeData()
// {



// }



