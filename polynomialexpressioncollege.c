// polynomial of a degree
// prog 15
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int hd;
    printf("\nEnter the highest degree of the polynomial: ");
    scanf("%d", &hd);
    int arr[hd], cof, con;
    char sign;

    for (int i = hd; i >= 0; i--)
    {
        if (i == 0)
        {
            printf("\nEnter Constant: ");
            scanf("%d", &con);
            arr[0]=con;
        }
        else
        {
            printf("\nEnter Coefficient: ");
            scanf("%d", &cof);
            arr[i] = cof;
        }
    }
    printf("\n + or - or * or /: ");
    fflush(stdin);
    scanf("%c",&sign);
    printf("\n<------------Printing Your Expression------------->\n");
    for (int i = hd; i >=0; i--)
    {
        if(i==0){
            printf(" %d",arr[0]);
        }
        else if(i == 1){
        printf(" %dx %c",arr[i],sign);
        }
        else{
        printf(" %dx^%d %c",arr[i],i,sign);
        }
    }
    

    return 0;
}