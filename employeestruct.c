// create a sturct data type for employee of company.
// employee name, id, salary
#include<stdio.h>
#include<stdlib.h>
typedef struct employees{
    char name[30];
    char id[20];
    float salary;
}emp;
int main()
{
    emp e1;

    printf("\nEnter employee name: ");
    scanf("%s",&e1->name);

    printf("\nEnter employee Id: ");
    scanf("%s",&e1->id);

    printf("\nEnter Employee Salary: ");
    scanf("%f",&e1->salary);

    // Printing the Input

    printf("\n------------------------\nEmployee Name is %s\nEmployee Id is: %s\nEmployee Salary is %.2f",e1->name,e1->id,e1->salary);
    return 0;
}