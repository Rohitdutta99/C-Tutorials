//Write a program in C to find the maximum number between two numbers using a pointer.
#include<stdio.h>
int main()
{
     int fno,sno,*ptr1=&fno,*ptr2=&sno;
     printf("Enter 1st number: ");
     scanf("%d",&fno);
     printf("Enter 2nd number: ");
     scanf("%d",&sno);

     (*ptr1>*ptr2)? printf("%d is the max",*ptr1):printf("%d is the max",*ptr2);

}