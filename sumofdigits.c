//Write a function to find sum of digits of a number.
#include<stdio.h>
int sumdigit(int n);
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);

    printf("Sum= %d",sumdigit(n));
    return 0;
}
int sumdigit(int n)
{
    int rem=0,sum=0;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    return sum;
}