//Write a function to print "Hot" or "Cold" depending on the temperature user enters.
#include<stdio.h>
int temp(int n);
int main()
{
    int n;
    printf("Enter temperature: ");
    scanf("%d",&n);

    if(temp(n)==1)
    printf("Hot");
    else
    printf("Cold");
}
int temp(int n)
{
    if(n>30)
    return 1;
    else
    return 2;
}