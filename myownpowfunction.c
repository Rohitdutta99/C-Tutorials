//Make your own pow function.
#include<stdio.h>
int power(int n,int p);
int main()
{
    int n,p,mul=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter power: ");
    scanf("%d",&p);
    
    printf("%d to the power %d is: %d",n,p,power(n,p));

}
int power(int n,int p)
{
    int mul=1;
    for(int i=1;i<=p;i++)
    {
        mul*=n;
    }
    return mul;
}