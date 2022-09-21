//Write a program to remove blank spaces in a string
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int freq(int n, char arr[]);
int main()
{
    char arr[50];
    printf("Enter anything: ");
    gets(arr);

    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==' ')
        {
            for(int j=i;arr[j]!='\0';j++)
            {
                arr[j]=arr[j+1];
            }
        }
    }
    printf("After Changes: %s",arr);
    return 0;
}