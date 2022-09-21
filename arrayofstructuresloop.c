// Array of structures
#include<stdio.h>
#include<string.h>
typedef struct student {
    int roll;
    float cgpa;
    char name[100];
}stu;

int main()
{
    int n;
    stu ece[100];

    printf("\nEnter how many students: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("\nEnter Name of Student: ");
        fflush(stdin);
        gets(ece[i].name);
        printf("\nEnter Roll no: ");
        scanf("%d",&ece[i].roll);
        printf("Enter CGPA: ");
        scanf("%f",&ece[i].cgpa);

    }

    printf("\n<-----Displaying the Records ----->\n");

    for(int i=0;i<n;i++)
    {
        printf("\nStudent name: %s",ece[i].name);
        printf("\nStudent Roll no: %d",ece[i].roll);
        printf("\nStudent CGPA: %.2f\n",ece[i].cgpa);

        printf("\n\n----------------------------\n\n");
    }

}