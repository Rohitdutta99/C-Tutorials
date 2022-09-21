// Write a program to print prime numbers in a range.
#include<stdio.h>
int prime(int n);
int main()
{
    int range,c=0;
    printf("Enter the range: ");
    scanf("%d",&range);

    for(int i=1;i<=range;i++)
    {
        if(prime(i)==2 && c<7)
        {
            printf(" %d ",i);
            c++;
        }
        else if(prime(i)==2)
        {
            printf("\n");
            c=1;
            printf(" %d ",i);
        }
    }
}
int prime(int n)
{
    int count=0;
    for(int j=1;j<=n;j++)
    {
        if(n%j==0)
        count++;
    }
    return count;
}