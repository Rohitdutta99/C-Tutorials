//8) Write a program to multiply two matrix of compatible order using 2D array. The matrix data are user input.

#include <stdio.h>
int main ()
{
    int i,j,k,r1,r2,c1,c2,a[100][100],b[100][100],d[100][100],sum;

    printf ("Enter row and column for 1st matrix:\n");
    scanf ("%d %d",&r1,&c1);
    printf ("Enter row and column for 2nd matrix:\n");
    scanf ("%d %d",&r2,&c2);

    printf ("Enter the elements of 1st matrix:\n");
    for (i=0;i<r1;i++)
    {
        for (j=0;j<c1;j++)
        {
            printf("\nEnter Element[%d][%d]: ", i, j);
            scanf ("%d", &a[i][j]);
        }
    }

     printf ("Enter the elements of 2nd matrix:\n");
    for (i=0;i<r1;i++)
    {
        for (j=0;j<c1;j++)
        {
            printf("\nEnter Element[%d][%d]: ", i, j);
            scanf ("%d", &b[i][j]);
        }
    }

     for (i=0;i<r1;i++)
    {
      for (j=0;j<c2;j++)
      {
          sum = 0;

       for (k=0;k<r2;k++)
       {
           sum = sum + (a[i][k]*b[k][j]);
       }
        d[i][j] = sum ;
      }

    }

    printf ("The product of two matrices\n");
     for (i=0;i<r1;i++)
    {
        for (j=0;j<c2;j++)
        {
            printf ("%d\t", d[i][j]);
        }
        printf ("\n\n");
    }
    return 0;
}
