#include <iostream>
#include "fileoperations.h"
#include "studentmanagement.h"
#include "csv.h"
using namespace std;

enum choice
{
    csv=1,xml,json
};

int main()
{
    int choice;
    cout<<"select Required file type"<<endl;
    cout<<"1.CSV"<<endl;
    cin>>choice;
    CSV c ;
    StudentManagement *student = new StudentManagement;
    switch(choice)
    {
    case csv:
    {
        c.sint(student);

        for(int i =0;i<10;i++)
        {
           student->addstudent("likhitha",23+i,1+i, "+91 9743076146");
           c.readData();

        }


    }
    }

    cout << "Hello World!" << endl;
    return 0;
}
