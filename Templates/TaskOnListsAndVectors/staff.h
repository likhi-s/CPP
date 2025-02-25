#ifndef STAFF_H
#define STAFF_H
#include <iostream>
using namespace std;

class Staff
{
private:
    int m_staffId;
    string m_staffName;
public:
    Staff();
    Staff(int id, string name);
    ~Staff();
    int getStaffId();
    string getStaffName();
    void setStaffName(string name);
};

#endif // STAFF_H

