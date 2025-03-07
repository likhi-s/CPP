#include <iostream>
#include "studentmanagement.h"

using namespace std;

enum choice{ AddStudent =1,DisplayStudent};
int main()
{
    StudentManagement studentmanagement;
    int choice;

    while (true)
    {
        cout<<endl<<"1. Add Student"<<endl<<"2. Display Student"<<endl;
        cout<< endl <<"Enter Your Choice"<<endl;
        cin >> choice;
        switch(choice)
        {
        case AddStudent:
        {
            studentmanagement.addStudent();
            break;
        }
        case DisplayStudent:
        {
            studentmanagement.displayStudent();
            break;
        }
        default:
            cout<<"Invalid Choice"<<endl;

        }

    }

    return 0;
}
