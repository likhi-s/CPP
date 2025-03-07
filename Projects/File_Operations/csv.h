#ifndef CSV_H
#define CSV_H

#include "fileoperations.h"

using namespace std;

class CSV : public FileOperations
{
public:
    CSV();
    ~CSV();
    void readFromFile(const string &filename);
    void writeToFile(const string &filename);
    list<Student>fstudentList;

};

#endif // CSV_H
