#ifndef FILEOPERATIONS_H
#define FILEOPERATIONS_H
#include <iostream>
#include "studentmanagement.h"
using namespace std;

class FileOperations
{
public:
    StudentManagement *m_student;
    FileOperations();
    ~FileOperations();
    virtual void readData()=0;

};

#endif // FILEOPERATIONS_H
