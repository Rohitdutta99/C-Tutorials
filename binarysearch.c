#include<stdio.h>
#include<stdlib.h>
void sortarray(int arr[],int n);
int main()
{
    int arr[10],n,item;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    if(n>10)
    {
        printf("Values valid till 10!!!\a");
        exit(0);
    }
    for(int i=0;i<n;i++)
    {
        printf("\nEnter number (%d): ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n\nEnter the item to search: ");
    scanf("%d",&item);
    sortarray(arr,n);
    printf("\n\n");
    

}
void sortarray(int arr[],int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        } 
    }
    printf("\n\nAfter sorting array values: \n");
	for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}