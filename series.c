//print series 1,11,111,1111..... upto n terms
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("\nEnter the value of n: ");
    scanf("%d",&n);
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=i; j++){
            printf("1");
        }
        if(i!=n)
        printf(", ");
    }
    return 0;
}