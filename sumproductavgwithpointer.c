#include<stdio.h>
void dowork(int a,int b,int *sum,int *prod,int *avg);

int main()
{
    int a=3, b=5;
    int sum,prod,avg;
    dowork(a,b,&sum,&prod,&avg);//a and b is call by value and sum,prod,avg are call by reference

    printf(" Sum= %d\n Product = %d\n Average = %d",sum,prod,avg);
}
void dowork(int a,int b,int *sum,int *prod,int *avg)
{
    *sum=a+b;
    *prod=a*b;
    *avg=(a+b)/2;
  
}