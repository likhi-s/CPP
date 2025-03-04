#include "csv.h"

CSV::CSV()
{
    cout<<"CSV constructor Called"<<endl;
}
CSV::~CSV()
{
    cout<<"CSV Destructor Called"<<endl;

}

list<Student> CSV::readData()
{

    cout<<"CSV read Data function Called"<<endl;
    list<Student>studentList;

    for(int i =0;i<10;i++)
    {
        studentList.push_back(Student("Likhitha",23,1234,"9743076146"));

    }


    return studentList;
}


