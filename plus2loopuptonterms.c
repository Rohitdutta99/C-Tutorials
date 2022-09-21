//print series 2,4,6,8.... upto n terms
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,t=-2;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        printf("%d\t",t+=2);
    return 0;
}