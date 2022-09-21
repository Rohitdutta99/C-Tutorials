//Write a program to check if the given number is a natural number.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);

    (n>0)? printf("Yes, %d is a natural number",n):printf("No, %d is not  a natural number",n);
}