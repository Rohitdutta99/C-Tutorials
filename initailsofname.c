// initails of a name print
//Prog 13
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("\nEnter your string: ");
    gets(str);
    int n = strlen(str);
    for (int i = 0; i < n; i++){
        if(i==0 || str[i-1]==' ')
        printf("%c",str[i]);
    }
    return 0;
}