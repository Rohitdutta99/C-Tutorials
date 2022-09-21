// bit manipulation
// find the only non repeating element in an array
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[] = {2,4,3,2,4},n=5,res=0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    printf("\nThe non-repeating number is: %d\n\n",res);

    return 0;
}