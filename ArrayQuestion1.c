#include<stdio.h>
int main()
{
    float price[3];
    printf("Enter 3 prices---->");
    for(int i=0;i<3;i++)
    {
        printf("\n Enter price(%d): ",i+1);
        scanf("%f",&price[i]);
    }
    for(int i=0;i<3;i++)
    {
        printf("\n Total price %d: %f",i+1 , price[i]+(0.18*price[i]));
    }
}