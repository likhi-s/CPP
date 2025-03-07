#ifndef STUDENTMANAGEMENT_H
#define STUDENTMANAGEMENT_H

#include <iostream>
#include "student.h"
#include "fileoperations.h"
#include "TxtFileOperations.h"
#include "CsvfileOperations.h"
#include <list>

class StudentManagement
{
private:
    list<Student> m_list;
    FileOperations* m_fileoperations;

public:
    StudentManagement();
    ~StudentManagement();
    void addStudent();
    void displayStudent();
};

#endif // STUDENTMANAGEMENT_H
