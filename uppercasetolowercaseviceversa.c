//Write a program to replace lowercase letters with uppercase & vice versa in a string.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char arr[50];
    printf("Enter anything: ");
    gets(arr);

    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]>='a' && arr[i]<='z')
        arr[i]=arr[i]-32;
        else if(arr[i]>='A' && arr[i]<='Z')
        arr[i]=arr[i]+32;
    }
    printf("After Changes: %s",arr);
    return 0;
}