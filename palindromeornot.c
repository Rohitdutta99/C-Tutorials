// palindrome or not a string
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[100];
    printf("\nEnter your string: ");
    gets(str);
    int n = strlen(str),j=0,c=0;
    char st1[n];
    strcpy(st1, str);
    for (int i = n-1; i >= 0; i--)
    {
        if(st1[i]==str[j++])
        c++;
    }
    if(c==n)
    printf("\nThis is a palindrome!!");
    else
    printf("\nThis is not a palindrome!!");

    return 0;
}