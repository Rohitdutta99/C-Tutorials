//add two 4*4 matrices
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[4][4], b[4][4], sum[4][4],r=4,c=4;
    printf("\n<-----------Input the values of Matrix ""'A'""----------->\n");
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("\nEnter element A[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n<-----------Input the values of Matrix ""'B'""----------->\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("\nEnter element B[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
            sum[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("\n<-----------After Adding Matrix ""'A'+'B'""----------->\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(j==0)
            printf("\n| %d ",sum[i][j]);
            else if(j==c-1)
            printf(" %d |",sum[i][j]);
            else
            printf(" %d ",sum[i][j]);
        }
        
    }
    
    return 0;
}