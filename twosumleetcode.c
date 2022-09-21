#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*arr,target,ind1=0,ind2=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    arr=(int*)malloc(sizeof(int)*n);
    
    if(n>10)
    {
        printf("Invalid Input!!");
        exit(0);
    }
    
    for(int i=0;i<n;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter Target: ");
    scanf("%d",&target);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                ind1=i;
                ind2=j;
                break;
            }
                
        }
        if(ind1!=0 && ind2!=0)
            break;
    }
    printf("Indices [%d,%d]",ind1,ind2);
}