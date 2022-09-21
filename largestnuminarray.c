//Write a program to print the largest number in an array.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[50],n,max;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    if(n>50)
    {
        printf("Invalid Input!!");
        exit(0);
    }
    for(int i=0;i<n;i++)
    {
        printf("Enter number(%d): ",i+1);
        scanf("%d",&arr[i]);
        if(i==0)
        max=arr[0];
        else if(arr[i]>max)
        max=arr[i];
    }
    printf("The max number in the array is: %d",max);
}