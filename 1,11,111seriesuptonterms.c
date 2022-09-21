//print series 1,11,111,1111..... upto n terms
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,t=1;
    printf("\nEnter the value of n: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("%d\t",t);
        t+=1*10;
    }
    return 0;
}