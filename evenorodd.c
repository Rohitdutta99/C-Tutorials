//Check if a number is even or odd
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("\nEnter any number: ");
    scanf("%d",&n);
    if(n%2==0)
        printf("\nEVEN");
    else
        printf("\nODD");
    return 0;
}