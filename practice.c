#include<stdio.h>
int sum(int n);
int main()
{
   /* int a= 5+2/2*3;
    printf("\n The value of a: %d",a);*/
    /*
    int itsunday =1;
    int itsnowing =1;
    printf("%d \n",itsunday && itsnowing);
    return 0;*/

    /*
    int itsunday =1;
    int itsnowing =1;
    printf("%d \n",itsunday || itsnowing);
    return 0;*/

    //Check weather the number is a 2digit nbumber or not
    /* int x;
    printf("Enter the value of x: ");
    scanf("%d",&x);

    if(x>9 && x<100)
    printf("2 digit number\n");
    else
    printf("not a 2 digit number\n"); */
    printf("\n Sum is: %d\n",sum(5));
    return 0;
}
int sum(int n)
{
    if(n==1){
        return 1;
    }
    int Sumc= 0;
    Sumc=sum(n-1);
    int SumN= Sumc +n;
    return SumN;
}