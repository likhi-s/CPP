#include "xml.h"

XML::XML()
{
    cout << "XML Constructor called" << endl;

}

XML::~XML()
{
    cout << "XML Destructor called" << endl;

}
list<Student> XML::readData()
{
    cout<<"XML Read Data function called"<<endl;

    list<Student>studentList;
    for(int i =0;i<10;i++)
    {
        studentList.push_back(Student("Likhitha",23,1234,"9743076146"));

    }

    return studentList;

}

