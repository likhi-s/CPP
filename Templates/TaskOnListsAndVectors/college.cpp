#include "college.h"

enum choice{UpdateStudentName =1,UpdateStudentAge,UpdateStudentFee};
enum option{ UpdateName=1,UpdateAge,UpdateSalary,UpdateContactNumber,UpdateExperience};

College::College()
{
    cout<<"Default Constructor of College Called"<<endl;

}

College::~College()
{
    cout<<"Destructor of College Called"<<endl;
}

void College::addStudent(int id, string name,int age,float fee)
{

    m_student.push_back(Student(id,name,age,fee));
    cout<<"Added Student"<<endl;
}

void College::deleteStudent(int id)
{
    for(auto it = m_student.begin();it != m_student.end();it++)
    {
        if(it->getStudentId() == id)
        {
            m_student.erase(it);
            cout<<"Deleted Student"<<endl;
            return;
        }

    }

    cout << "Student Not Found!" << endl;


}

void College::updateStudent(int id)
{
    for (auto &s : m_student)
    {
        if (s.getStudentId() == id)
        {
            cout<<endl<<"Details to update"<<endl;
            cout<<"1.Name"<<endl;
            cout<<"2.Age"<<endl;
            cout<<"3.Fee"<<endl;

            cout<<endl<<"Select your Choice"<<endl;

            int choice;
            cin>>choice;
            switch(choice)
            {
            case UpdateStudentName:
            {
                cout<<"before Updating Student Name :"<<s.getStudentName()<<endl;
                string newName;
                cout<<"enter New Name of Student"<<endl;
                cin>>newName;
                s.setStudentName(newName);
                cout<<endl<<"Updated Student Name :"<<s.getStudentName()<<endl;
                break;
            }
            case UpdateStudentAge:
            {
                cout<<"before Updating Student Age :"<<s.getStudentAge()<<endl;
                int newAge;
                cout<<"enter New Age of Student"<<endl;
                cin>>newAge;
                s.setStudentAge(newAge);
                cout<<endl<<"Updated Student Age :"<<s.getStudentAge()<<endl;
                break;
            }
            case UpdateStudentFee:
            {
                cout<<"before Updating Student Fee :"<<s.getStudentFee()<<endl;
                float newFee;
                cout<<"enter New Fee of Student"<<endl;
                cin>>newFee;
                s.setStudentFee(newFee);
                cout<<endl<<"Updated Student Fee :"<<s.getStudentFee()<<endl;
                break;
            }
            default:
                cout<<"Invalid Choice"<<endl;
            }

            return;
        }
    }
    cout<<"Student Not Found"<<endl;
}

void College::findStudent(int id)
{
    for(auto it = m_student.begin();it != m_student.end();it++)
    {
        if(it->getStudentId() == id)
        {
            cout<<endl<< "Student Found: "<< endl;
            cout<<"Student Name:"<<it->getStudentName()<<endl;
            cout<<"Student Age:"<<it->getStudentAge()<<endl;
            cout<<"Student Fee:"<<it->getStudentFee()<<endl;
            return;
        }

    }

    cout << "Student Not Found!" << endl;
}

void College::displayStudentData()
{
    int found =0;
    for(auto it = m_student.begin();it != m_student.end();it++)
    {
        found =1;
        cout<<"Student Data"<<endl;

        cout<<"ID:"<<it->getStudentId()<<endl;
        cout<<"Name:"<<it->getStudentName()<<endl;
        cout<<"Age:"<<it->getStudentAge()<<endl;
        cout<<"Fee:"<<it->getStudentFee()<<endl;
    }
    if(found==0)
    {
        cout<<"No student Data found"<<endl;

    }

}

void College::addStaff(int id, string name,int age,float salary,int number,int experience)
{
    m_staff.push_back(Staff(id,name,age,salary,number,experience));
    cout<<"Added Staff"<<endl;
}



void College::deleteStaff(int id)
{
    for(auto it = m_staff.begin();it != m_staff.end();it++)
    {
        if(it->getStaffId() == id)
        {
            m_staff.erase(it);
            cout<<"Deleted staff"<<endl;
            return;
        }

    }

    cout << "Staff Not Found!" << endl;
}

void College::updateStaff(int id)
{
    for (auto &s : m_staff)
    {
        if (s.getStaffId() == id)
        {
            cout<<endl<<"Details to update"<<endl;
            cout<<"1.Name"<<endl;
            cout<<"2.Age"<<endl;
            cout<<"3.Salary"<<endl;
            cout<<"4.Contact Number"<<endl;

            cout<<endl<<"Select your Choice"<<endl;
            int soption;
            cin>>soption;
            switch(soption)
            {
            case UpdateName:
            {
                cout<<"before Updating Staff Name :"<<s.getStaffName()<<endl;
                string newName;
                cout<<"enter New Name of Staff"<<endl;
                cin>>newName;
                s.setStaffName(newName);
                cout<<"Updated Staff Name:"<<s.getStaffName()<<endl;

                break;
            }
            case UpdateAge:
            {
                cout<<"before Updating Staff Age :"<<s.getStaffAge()<<endl;
                int newAge;
                cout<<"enter New Age of Staff"<<endl;
                cin>>newAge;
                s.setStaffAge(newAge);
                cout<<endl<<"Updated Staff Age :"<<s.getStaffAge()<<endl;
                break;
            }
            case UpdateSalary:
            {
                cout<<"before Updating Staff Salary :"<<s.getStaffSalary()<<endl;
                int newSalary;
                cout<<"enter New Salary of Staff"<<endl;
                cin>>newSalary;
                s.setStaffSalary(newSalary);
                cout<<endl<<"Updated Staff Salary :"<<s.getStaffSalary()<<endl;
                break;
            }
            case UpdateContactNumber:
            {
                cout<<"before Updating Staff ContactNumber :"<<s.getStaffContactNumber()<<endl;
                int newContactNumber;
                cout<<"enter New ContactNumber of Staff"<<endl;
                cin>>newContactNumber;
                s.setStaffContactNumber(newContactNumber);
                cout<<endl<<"Updated Staff ContactNumber :"<<s.getStaffContactNumber()<<endl;
                break;
            }
            case UpdateExperience:
            {
                cout<<"before Updating Staff Experience :"<<s.getStaffExperience()<<endl;
                int newExperience;
                cout<<"enter New Experience of Staff"<<endl;
                cin>>newExperience;
                s.setStaffExperience(newExperience);
                cout<<endl<<"Updated Staff Experience :"<<s.getStaffExperience()<<endl;
                break;
            }
            default:
                cout<< "Invalid Choice"<<endl;

                return;
            }
        }
        cout<<"Staff Not Found"<<endl;
    }
}

void College::findStaff(int id)
{
    for(auto it = m_staff.begin();it != m_staff.end();it++)
    {
        if(it->getStaffId() == id)
        {
            cout << "Staff Found: " <<endl;
            cout<<"Id:"<<it->getStaffId()<< endl;
            cout<<"Name:"<<it->getStaffName()<< endl;
            cout<<"Age:"<<it->getStaffAge()<< endl;
            cout<<"Salary:"<<it->getStaffSalary()<< endl;
            cout<<"Contact Number:"<<it->getStaffContactNumber()<< endl;
            cout<<"Experience:"<<it->getStaffExperience()<< endl;

            return;
        }

    }

    cout << "Staff Not Found!" << endl;
}


void College::displayStaffData()
{
    int found =0;
    for(auto it = m_staff.begin();it != m_staff.end();it++)
    {
        found =1;
        cout<<"Staff Data"<<endl;

        cout<<"ID:"<< it->getStaffId() << endl;
        cout<<"Name:"<< it->getStaffName() << endl;
        cout<<"Age:"<<it->getStaffAge()<< endl;
        cout<<"Salary:"<<it->getStaffSalary()<< endl;
        cout<<"Contact Number:"<<it->getStaffContactNumber()<< endl;
        cout<<"Experience:"<<it->getStaffExperience()<< endl;
    }
    if(found==0)
    {
        cout<<"No Staff Data found"<<endl;

    }

}
