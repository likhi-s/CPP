#include "staff.h"

Staff::Staff()
{
    cout<<"Default Constructor of Staff Called"<<endl;
}
Staff::Staff(int id, string name)
{
    cout<<"Parameterized Constructor of staff Called"<<endl;

    m_staffId = id;
    m_staffName = name;
}

Staff::~Staff()
{
    cout<<"Destructor of Staff Called"<<endl;

}

int Staff::getStaffId()
{
    return m_staffId;
}
string Staff::getStaffName()
{
    return m_staffName;
}
void Staff:: setStaffName(string name)
{
   m_staffName= name;
}



// #include "staff.h"

// Staff::Staff() {
//     cout << "Default Constructor of Staff Called" << endl;
// }

// Staff::Staff(int id, string name) {
//     cout << "Parameterized Constructor of Staff Called" << endl;
//     m_staffId = id;
//     m_staffName = name;
// }

// Staff::~Staff() {
//     cout << "Destructor of Staff Called" << endl;
// }

// int Staff::getStaffId() const {
//     return m_staffId;
// }

// string Staff::getStaffName() const {
//     return m_staffName;
// }

// void Staff::setStaffName(string name) {
//     m_staffName = name;
// }

