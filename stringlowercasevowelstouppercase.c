//Write a program to convert all lowercase vowels to uppercase in a string.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char arr[50];
    int n;
    printf("Enter anything: ");
    gets(arr);
    printf("\nThe original string: %s",arr);

    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]=='a'|| arr[i]=='e'|| arr[i]=='i'|| arr[i]=='o'|| arr[i]=='u')
        arr[i]=arr[i]-32;
    }
    printf("\n\nThe New string: %s",arr);
}