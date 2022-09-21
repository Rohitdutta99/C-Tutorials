#include<stdio.h>
int main()
{
    int adhaar[5],*ptr=&adhaar[0];
    
    //input
    for(int i=0;i<5;i++)
    {
        printf(" %d index : ",i);
        scanf("%d",ptr+i);
    } 

    //output
    for(int i=0;i<5;i++)
    {
        printf(" %d index = %d\n",i,*(ptr+i));
    }
}