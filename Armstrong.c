// Write a program to check if a given number is Armstrong number or not.
#include<stdio.h>
int main()
{
    int n,t,rem=0,sum=0;
    printf("\nEnter the value of n: ");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n/=10;
    }

    if(t==sum)
    printf("\n%d is an Armstrong Number",t);
    else
    printf("\n%d is not an Armstrong Number",t);
}