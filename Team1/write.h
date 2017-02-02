#ifndef WRITE_H
#define WRITE_H
#include <QString>
#include "global.h"
#include "frame.h"

class writefile
{
    public:
        writefile();
        void write(QString, int**, int, int*);
        int *make2(int);
        int** populate(Frame *, int**, int);
        int *populate2(int, int*, int);
        int** make(int);
};

#endif // WRITE_H
