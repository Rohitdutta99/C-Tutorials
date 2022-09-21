/*
Search on what a "nested loop" is & print this pattern using it.

*****
*****
*****
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=5;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}