//Write a program in C to print all the letters in english alphabet using a pointer.
#include<stdio.h>
int main()
{
    char a='a',b='A';
    char *ptr= &a,*ptr1= &b;

    for(int i=0;i<26;i++)
    {
        printf(" %c     %c\n",*ptr1+i,*ptr+i);
    }

}