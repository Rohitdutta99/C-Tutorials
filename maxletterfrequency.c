//Write a program to print the highest frequency character in a string.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int freq(int n, char arr[]);
int main()
{
    char arr[50],maxnum;
    int n,c,max,f=0;
    printf("Enter anything: ");
    gets(arr);

    for(int i=0;arr[i]!='\0';i++)
    {
        f=freq(arr[i],arr);
        if(i==0)
        {
        max=f;
        maxnum=arr[i];
        }
        else if(f>max)
        {
        max=f;
        maxnum=arr[i];
        }
    }
    printf("The letter %c has appeared %d times: ",maxnum,max);
}
int freq(int n, char arr[])
{
    int c=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        if(n==arr[i])
        c++;
    }
    return c;
}