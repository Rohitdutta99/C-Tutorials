//Write a program in C to print the elements of an array in reverse order.
#include<stdio.h>
int main()
{
    int a[50],n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    for(int i=n-1;i>=0;i--)
    {
        printf(" %d ",a[i]);
    }
}