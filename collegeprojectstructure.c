/*
Make a system that can store information of allstudents, teachers & staff of your college
in the formof structures. You can also make this into a C Project with other functionalities 
like cgpa calculation of students,storing attendance etc. */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student
{
    char name[100];
    char dept[100];
    int roll;
    int attendance;    
} stu;

int main()
{
    int choice,n;
    char choice2;
    stu Science[500], Commerce[100], Arts[100];
    printf("Which stream students you want to make a record:\nBCA: PRESS 1\nHotel Management: PRESS 2\nMultimedia Animation: PRESS 3\nYour Input Please: ");
    scanf("%d",&choice);
    
    switch (choice)
    {
    case 1:
        reenter:
        printf("\n\nHow many total entries you want to make: ");
        scanf("%d",&n);
        if(n>500)
        {
            printf("\nInvalid Input!!");
            printf("\nDo you want to re-enter(y/n): ");
            fflush(stdin);
            scanf("%c",&choice2);
            if(choice2=='y'||'Y')
                goto reenter;
            else
                exit(0);
        }
        for(int i=0;i<n;i++)
        {
            printf("\n<-----Enter Details of Student %d------>",i+1);
            printf("\n\nEnter Student Name: ");
            fflush(stdin);
            scanf("%s",&Science[i].name);
            printf("\nEnter Department: ");
            fflush(stdin);
            scanf("%s",&Science[i].dept);
            printf("\nEnter Roll No: ");
            fflush(stdin);
            scanf("%d",&Science[i].roll);
            printf("\nEnter Attendance: ");
            scanf("%d",&Science[i].attendance);
        }

        break;
    
    default:
        printf("\nINVALID ENTRY!!");
        break;
    }
    printf("\n DONE");
}