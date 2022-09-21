// Write a program to store the data of 3 students
#include<stdio.h>
#include<string.h>
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student s1,s2,s3;

    s1.roll= 1664;
    s1.cgpa= 9.2;
    strcpy(s1.name, "Rohit");

    printf("Stdent name: %s\n",s1.name);
    printf("Student roll no: %d\n",s1.roll);
    printf("Student CGPA: %.2f\n",s1.cgpa);

    s2.roll= 1665;
    s2.cgpa= 9.1;
    strcpy(s2.name,"Mohit");

    printf("\n-------------------------------\n");

    printf("Student name: %s\n",s2.name);
    printf("Student Roll no: %d\n",s2.roll);
    printf("Student CGPA: %.2f\n",s2.cgpa);

    s3.roll= 1666;
    s3.cgpa= 8.5;
    strcpy(s3.name,"Raj");

    printf("\n-------------------------------\n");

    printf("Student name: %s\n",s3.name);
    printf("Student roll no: %d\n",s3.roll);
    printf("Student CGPA: %.2f\n\n",s3.cgpa);



}