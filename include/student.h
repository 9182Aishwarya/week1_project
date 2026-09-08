#ifndef STUDENT_H
#define STUDENT_H
struct Student
{
    int id;
    char name[30];
};
extern struct Student s[10];
extern int count;
void addStudent();
void display();
void createProcesses();
#endif
