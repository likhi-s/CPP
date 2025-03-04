#include "json.h"

JSON::JSON()
{
    cout<<"JSON constructor Called"<<endl;
}
JSON::~JSON()
{
    cout<<"JSON Destructor Called"<<endl;
}
list<Student> JSON::readData()
{

    cout<<"JSON read Data function Called"<<endl;
    list<Student>studentList;

    for(int i =0;i<10;i++)
    {
        studentList.push_back(Student("Likhitha",23,1234,"9743076146"));

    }


    return studentList;
}
