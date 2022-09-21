#include<stdio.h>
void printAddress(int n);//call by value
void _printAddress(int *n);//call by reference
int main()
{
    int n=4;
    //printf("%u\n",&n);
    //printAddress(n);//call by value
    //printf("%u\n",&n);
    _printAddress(&n);//call by refernce
    printf("%u\n",&n);
    return 0;
}
//call by value
void printAddress(int n)
{
    printf("%u\n",&n);
}
// call by reference
void _printAddress(int *n)
{
    printf("%u\n",n);
}