//Write a function to find square root of a number
#include<stdio.h>
#include<math.h>
double square(double n);
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);

    printf("Square root of %d is: %.2f",n,square(n));
    return 0;
}
double square(double n)
{
    return sqrt(n);
}