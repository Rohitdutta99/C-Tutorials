// Write a program to check if given character is digit or not.
#include<stdio.h>
int main()
{
    char n;
    printf("\n Enter anything: ");
    scanf("%c",&n);

    (n>='0' && n<='9')? printf("\n %c is a digit",n):printf("\n %c is not a digit",n);

}