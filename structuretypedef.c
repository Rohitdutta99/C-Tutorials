// structure typedef
// typedef creates an alias/ nickname for the data types
#include<stdio.h>
#include<string.h>
typedef struct student
{
    int roll;
    float cgpa;
    char name[100];
}stu;
//if there is any structure we always have to declare any function after the definition of the structure
void printinfo(stu s1);

int main()
{
    stu s1={15,9.5,"Rohit"}; 
    printinfo(s1);
    
}

void printinfo(stu s1)
{
    printf("Student name: %s\nStudent Roll: %d\nStudent CGPA: %.2f\n\n",s1.name,s1.roll,s1.cgpa);
}