/*
A   A
 B B
  C
pattern printing
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a=64;
    printf("\nEnter the number of lines: ");
    scanf("%d",&n);

    for (int i = n-1; i >= 0; i--)
    {
        for (int j = i; j < n-1; j++)
            printf(" ");
        printf("%c",++a);
        for (int k = 1; k < i*2; k++)
            printf(" ");
        if(i>=1)
            printf("%c",a);
        printf("\n");
    }
    return 0;
}