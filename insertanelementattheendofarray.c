//Write a program to insert an element at the end of an array.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[]={5,3,9,7,5};
    printf("Enter the next number: ");
    scanf("%d",&arr[5]);
    for(int i=0;i<6;i++)
    {
        printf(" %d ",arr[i]);
    }
    
}