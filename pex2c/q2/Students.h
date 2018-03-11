// Students.h ... interface to Students datatype

#ifndef STUDENTS_H

#include <stdlib.h>
#include <stdio.h>

typedef struct _students *Students;
typedef struct _stu_rec  *StuRec;

Students getStudents(int);
void showStudents(Students);
void showStuRec(StuRec);
Students filterOnWAM(Students,float);

#endif
