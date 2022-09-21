#include<stdio.h>
void square(int n);
void _square(int *n);

int main()
{
    int num=4;
    square(num);//call by value
    printf("Number =%d\n",num);
    _square(&num);//call by reference
    printf("Number =%d\n",num);
    return 0;
}
//call by value
void square(int n)
{
    n=n*n;
    printf("Square = %d\n",n);
}
//call by reference
void _square(int *n)
{
    *n=(*n)*(*n);
    printf("Square = %d\n",*n);
}