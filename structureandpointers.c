// structure and using pointers
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

    struct student *ptr =&s1;
    printf("Student name: %s\nStudent Roll: %d\nStudent CGPA: %.2f\n\n",(*ptr).name,(*ptr).roll,(*ptr).cgpa);
    printf("Student name: %s\nStudent Roll: %d\nStudent CGPA: %.2f\n\n",ptr->name,ptr->roll,ptr->cgpa);
}