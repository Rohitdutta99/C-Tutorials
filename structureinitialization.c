//structure initialization at the moment of declaration
#include<stdio.h>
#include<string.h>
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student s1={1664,9.2,"Rohit"};
    printf("Student name: %s\nStudent Roll: %d\nStudent CGPA: %.2f\n\n",s1.name,s1.roll,s1.cgpa);
}