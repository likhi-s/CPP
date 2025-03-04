#include <iostream>
#include "college.h"
using namespace std;

enum option
{
    STUDENT=1,STAFF
};
enum choice
{
    ADD=1,DELETE,UPDATE,FIND,DISPLAY
};

enum soption{
    UpdateName=1,UpdateAfe,UpdateSalary,UpdateContactNumber,UpdateExperience
};

int main()
{
    College college;

    cout<<"      1.Student"<<endl<<"      2.Staff"<<endl;
    cout<<"Enter Option"<<endl;
    int option;
    cin>>option;
    switch(option)
    {
    case STUDENT:
        while(true)
        {
            cout<<"       1.Add Student"<<endl;
            cout<<"       2.Delete Student"<<endl;
            cout<<"       3.Update Student"<<endl;
            cout<<"       4.Find Student"<<endl;
            cout<<"       5.Display Student Data"<<endl;

            cout<<"Enter choice"<<endl;
            int choice;
            cin>>choice;
            switch(choice)
            {
            case ADD:
            {
                int id,age;
                string name;
                float fee;
                cout<<"enter Student Id : ";
                cin>>id;
                cout<<"enter Student Name :";
                cin>>name;
                cout<<"enter Student Age :";
                cin>>age;
                cout<<"enter Student Fee :";
                cin>>fee;



                college.addStudent(id,name,age,fee);
                break;
            }
            case DELETE:
            {
                int id;
                cout<<"enter Student Id to delete"<<endl;
                cin>>id;
                college.deleteStudent(id);
                break;
            }
            case UPDATE:

                {
                    int id;
                    cout<<"enter Student Id to update"<<endl;
                    cin>>id;
                    college.updateStudent(id);
                    break;
                }
            case FIND:
            {
                int id;
                cout<<"enter Student Id to Find"<<endl;
                cin>>id;
                college.findStudent(id);
                break;
            }
            case DISPLAY:
            {
                college.displayStudentData();
                break;
            }
            default:
                cout<<"Invalid Choice, try again"<<endl;
                break;

            }

        }
        break;
    case STAFF:

        while(true)
        {
            cout<<"       1.Add Staff"<<endl;
            cout<<"       2.Delete Staff"<<endl;
            cout<<"       3.Update Staff"<<endl;
            cout<<"       4.Find Staff"<<endl;
            cout<<"       5.Display Staff Data"<<endl;

            cout<<"Enter choice"<<endl;
            int choice;
            cin>>choice;
            switch(choice)
            {
            case ADD:
            {
                int id,age,contactNumber,experience;
                float salary;
                string name;
                cout<<"enter Staff Id: ";
                cin>>id;
                cout<<"enter Staff Name: ";
                cin>>name;
                cout<<"enter Staff Age: ";
                cin>>age;
                cout<<"enter Staff Salary: ";
                cin>>salary;
                cout<<"enter Staff Contact Number: ";
                cin>>contactNumber;
                cout<<"enter Staff Experience: ";
                cin>>experience;

                college.addStaff(id,name,age,salary,contactNumber,experience);
                break;
            }
            case DELETE:
            {
                int id;
                cout<<"enter Staff Id to delete"<<endl;
                cin>>id;
                college.deleteStaff(id);
                break;
            }
            case UPDATE:

                {
                    int id;
                    cout<<"enter Staff Id to update"<<endl;
                    cin>>id;
                    college.updateStaff(id);
                    break;
                }
            case FIND:
            {
                int id;
                cout<<"enter Staff Id to Find"<<endl;
                cin>>id;
                college.findStaff(id);
                break;
            }
            case DISPLAY:
            {
                college.displayStaffData();
                break;
            }
            default:
                cout<<"Invalid Choice, try again"<<endl;
                break;

            }

        }
        break;


        cout << "Hello World!" << endl;
        return 0;

    }
}
