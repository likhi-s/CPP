#ifndef CSVFILEOPERATIONS_H
#define CSVFILEOPERATIONS_H

#include "fileoperations.h"
#include <fstream>

class CSVFileOpeartions : public FileOperations
{
public:
    CSVFileOpeartions();
    ~CSVFileOpeartions();
    void writeData(const list<Student>& students) override;
    list<Student> readData() override;
};

#endif // CSVFILEOPERATIONS_H
