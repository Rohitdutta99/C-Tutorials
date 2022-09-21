// Write a program to print the smallest number of two.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);

    printf("Enter b: ");
    scanf("%d",&b);
    (a<b)? printf("%d is the smallest",a):printf("%d is the smallest",b);
}