//Remove all the punchuations from a string
//prog 12
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("\nEnter your string: ");
    gets(str);
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        
        if(!(str[i]>=' ' && str[i]<= '/') || (str[i]>=':' && str[i]<= '@') || (str[i]>='[' && str[i]<= '`') || (str[i]>='{' && str[i]<= '~'))
        {
            //Indexdeletion(str,n,i);
            //st[j++]=str[i];
            printf("%c",str[i]);
        }
        
    }
    return 0;
}