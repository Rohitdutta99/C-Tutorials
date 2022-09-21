// pangram or not
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>

int main()
{
    char arr[100];
    int freq[26]={0};
    bool flag=true;
    
    printf("\nEnter your String: ");
    gets(arr);
    
    for(int j = 0; arr[j]!='\0'; j++){
        if(arr[j]!=' '){
        char c = tolower(arr[j]);
        int index = c-'a';
        freq[index] += 1;
        }         
    }
    for (int i = 0; i < 26; i++)
    {
        if(freq[i]==0)
            flag = false;
    }
    if(flag == true)
        printf("\n%s\n\n----------------------------\nThis String is Pangram\n----------------------------\n\n",arr);
    else
        printf("\n%s\n\n----------------------------\nThis String is not Pangram\n----------------------------\n\n",arr);  

    return 0;
}