// bit manipulation
// find the only non repeating element in an array
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[]={2,4,3,2,5,4},n=6,res=0;
    for (int i = 0; i < n; i++)
    res^=arr[i];

    res=res&~(res-1);

    int set1=0;
    int set2=0;

    for (int i = 0; i < n; i++)
    {
        if(res&arr[i])
        set1^=arr[i];
        else
        set2^=arr[i];
    }

    
    printf("\nThe non-repeating number are: %d and %d\n\n",set1,set2);

    return 0;
}