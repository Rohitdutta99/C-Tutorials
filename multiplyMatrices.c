// Multiply 2 matrices
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sum = 0, r1, c1, r2, c2;
    printf("\nEnter number of rows for Matrix A: ");
    scanf("%d", &r1);
    printf("\nEnter number of columns for Matrix A: ");
    scanf("%d", &c1);
    printf("\nEnter number of rows for Matrix B: ");
    scanf("%d", &r2);
    printf("\nEnter number of columns for Matrix B: ");
    scanf("%d", &c2);
    if (c1 == r2)
    {
        int a[r1][c1], b[r2][c2], ans[r1][c2];
        printf("\n\n<---------------Enter Your Matrix A--------------->\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("\nEnter Element[%d][%d]: ", i, j);
                scanf("%d",&a[i][j]);
            }
        }
        printf("\n\n<---------------Enter Your Matrix B--------------->\n");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("\nEnter Element[%d][%d]: ", i, j);
                scanf("%d",&b[i][j]);
            }
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                for (int k = 0; k < c1; k++)
                {
                    sum += (a[i][k] * b[k][j]);
                }
                ans[i][j] = sum;
                sum = 0;
            }
        }
        printf("\n\n<---------------Printing the Resultant Matrix--------------->\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf(" %d ", ans[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nThese matrices are not compatible!!");
    }

    return 0;
}