#ifndef STUDENT_H
#define STUDENT_H

void addStudent();
void createProcesses();
extern int count;
struct Student
{
int id;
    char name[30];
};
extern struct Student s[];



#endif

