// Array of structures
#include<stdio.h>
#include<string.h>
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student ece[100];

    ece[0].roll= 13;
    ece[0].cgpa= 9.1;
    strcpy(ece[0].name,"Rohit");

    printf("Student name: %s\n",ece[0].name);
    printf("Student Roll no: %d\n",ece[0].roll);
    printf("Student CGPA: %.2f\n\n",ece[0].cgpa);
}