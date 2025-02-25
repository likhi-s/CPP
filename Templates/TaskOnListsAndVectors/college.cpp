#include "college.h"

College::College()
{
    cout<<"Default Constructor of College Called"<<endl;

}

College::~College()
{
    cout<<"Destructor of College Called"<<endl;

}

void College::addStudent(int id, string name)
{

    m_student.push_back(Student(id,name));
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
            cout<<"before Updating Student Name :"<<s.getStudentName()<<endl;
            string newName;
            cout<<"enter New Name of Student"<<endl;
            cin>>newName;
            s.setStudentName(newName);
            cout<<"Updated Student"<<endl;
            cout<<"After Updating Student Name :"<<s.getStudentName()<<endl;

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
            cout << "Student Found: " << it->getStudentName() << endl;
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

        cout<<"ID:"<< it->getStudentId() << endl;
        cout<<"Name:"<< it->getStudentName() << endl;
    }
    if(found==0)
    {
        cout<<"No student Data found"<<endl;

    }


}

void College::addStaff(int id, string name)
{
    m_staff.push_back(Staff(id,name));
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
            cout<<"before Updating Staff Name :"<<s.getStaffName()<<endl;
            string newName;
            cout<<"enter New Name of Staff"<<endl;
            cin>>newName;
            s.setStaffName(newName);
            cout<<"Updated Staff"<<endl;
            cout<<"After Updating Staff Name :"<<s.getStaffName()<<endl;

            return;
        }
    }
    cout<<"Staff Not Found"<<endl;
}

void College::findStaff(int id)
{
    for(auto it = m_staff.begin();it != m_staff.end();it++)
    {
        if(it->getStaffId() == id)
        {
            cout << "Staff Found: " << it->getStaffName() << endl;
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
    }
    if(found==0)
    {
        cout<<"No Staff Data found"<<endl;

    }

}

