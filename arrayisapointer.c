#include<stdio.h>
int main()
{
    int n;

    printf("Enter the size of the array: ");
    scanf("%d",&n);
    
    int a[n],*ptr=a;

    for(int i=0;i<n;i++)
    {
        printf("Enter number(%d): ",i+1);
        scanf("%d",ptr+i);
    } 
    for(int i=0;i<n;i++)
    {
        printf(" %d ",*(ptr+i));
    }
}