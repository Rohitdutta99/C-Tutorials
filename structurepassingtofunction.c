// passing a structure to a function
#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    float cgpa;
    char name[100];
};
//if there is any structure we always have to declare any function after the definition of the structure
void printinfo(struct student s1);

int main()
{
    struct student s1={15,9.5,"Rohit"};
    printinfo(s1);
    
}

void printinfo(struct student s1)
{
    printf("Student name: %s\nStudent Roll: %d\nStudent CGPA: %.2f\n\n",s1.name,s1.roll,s1.cgpa);
}