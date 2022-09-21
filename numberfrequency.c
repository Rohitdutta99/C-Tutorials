//In an array of numbers, find how many times doesa number 'x' occurs.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[50],n,s,c=0;
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
    }
    printf("Which number you want to search: ");
    scanf("%d",&s);
    for(int i=0;i<n;i++)
    {
        if(s==arr[i])
        c++;
    }
    printf("The number %d has occured: %d times",s,c);
}