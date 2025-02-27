#ifndef CSV_H
#define CSV_H
#include <iostream>
using namespace std;
#include "fileoperations.h"
#include "studentmanagement.h"


class CSV:public FileOperations
{
private:
    StudentManagement *m_student;
public:
    CSV();
    ~CSV();
    void sint(StudentManagement *s);
    void readData()override;
};

#endif // CSV_H
