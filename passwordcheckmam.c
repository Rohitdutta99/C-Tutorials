/*
Write a C method to check whether a string is a valid password. 
Password rules:
A password must have at least eightcharacters.
A password consists of only letters and digits.
A password must contain at least two digits
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char pass[20];
int c=0,res;

int passwordcheck(int size){
    if(size<8)
    {
    printf("\nCharacter length should be greater than 8!!\n");
    return -1;
    }
    else{
        for (int i = 0; pass[i]!= '\0'; i++)
        {
            if(pass[i]>='0' && pass[i]<='9')
            c++;
            if((pass[i]>='A' && pass[i]<='Z')||(pass[i]>='a' && pass[i]<='z')||(pass[i]>='0' && pass[i]<='9'))
            continue;
            else{
                printf("\nOnly Albhabets and Numbers are allowed!!");
                return -1;
            }
            
        }
        if(c>=2)
        return 1;
        else{
            printf("\nThere must be at least 2 digits!!");
            return -1;
        }        
    }
}

int main()
{
    printf("\nEnter your password: ");
    fflush(stdin);
    gets(pass);
    res = passwordcheck(strlen(pass));
    if(res==-1)
        printf("\n--------------------------\nPassword not set!!\n--------------------------\n");
    else
        printf("\n--------------------------\nPassword set Succesfully!!\n--------------------------\n");
    return 0;
}