// swap 2 numbers using pointers
#include<stdio.h>
void swap(int a, int b);
void _swap(int *a,int *b);
int main()
{
    int x=3,y=5;
    swap(x,y);//call by value
    printf("\nx= %d and y= %d",x,y);
    _swap(&x,&y);//call by reference
    printf("\nx= %d and y= %d",x,y);

}
//call by value
void swap(int a,int b)
{
    int t=a;
    a=b;
    b=t;
    printf("\na= %d and b= %d",a,b);
}
//call by reference 
void _swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
    printf("\na= %d and b= %d",*a,*b);
}