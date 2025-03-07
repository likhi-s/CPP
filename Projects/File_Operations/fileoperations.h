#ifndef FILEOPERATIONS_H
#define FILEOPERATIONS_H

#include <list>
#include "student.h"
#include <iostream>

using namespace std;

class FileOperations
{
public:
    FileOperations();
    virtual ~FileOperations();
    // virtual list<Student> readData() = 0;
    // virtual void writeData()=0;
};

#endif // FILEOPERATIONS_H
