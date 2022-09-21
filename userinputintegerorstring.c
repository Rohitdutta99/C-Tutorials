// User input is an integer or string
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100],str[100],integer[100];
    int j=0,k=0;
    printf("\nEnter your input: ");
    gets(ch);

    for (int i = 0; ch[i] != '\0'; i++)
    {
        if(ch[i]>='0' && ch[i]<='9')
        {
            integer[j++]=ch[i];
        }
        else{
            str[k++]=ch[i];
        }
    }
    printf("\n\n------------------------------\nIntegers are Displayed below\n------------------------------\n\n");
    for (int i = 0; integer[i]!='\0'; i++)
        printf("%c\t",integer[i]);
    printf("\n\n------------------------------\nString are Displayed below\n------------------------------\n\n");
    for (int i = 0; str[i]!='\0'; i++)
        printf("%c\t",str[i]);

    printf("\n\n");
    return 0;
}

    /*int main()
    {
        char ch;
        printf("\nEnter your input: ");
        scanf("%c",&ch);

        if(ch>='0' && ch<='9')
            printf("\nIt is an Integer");
        else
            printf("\nIt is a String");
        return 0;
    }*/