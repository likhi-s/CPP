#ifndef CSV_H
#define CSV_H
#include "fileoperations.h"

using namespace std;

class CSV:public FileOperations
{
private:
    list<Student> readData()override;

public:
    CSV();
    ~CSV();


};

#endif // CSV_H
