#ifndef TXTFILEOPERATIONS_H
#define TXTFILEOPERATIONS_H

#include "fileoperations.h"
#include <fstream>

class TXTFileOpeartions : public FileOperations
{
public:
    TXTFileOpeartions();
    ~TXTFileOpeartions();
    void writeData(const list<Student>& students) override;
    list<Student> readData() override;
};

#endif // TXTFILEOPERATIONS_H
