// Sparse matrix
// prog 14
#include <stdio.h>
#include <stdlib.h>
typedef struct sparse_matrix
{
    int row;
    int col;
    int data;
    struct sparse *next;
} sparse;

sparse *head = NULL;

void traverse()
{
    sparse *p = head;
    while (p->next != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
}

sparse *createsparse(int r, int c, int arr[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] != 0)
            {
                if (head == NULL)
                {
                    sparse *ptr = (sparse *)malloc(sizeof(sparse));
                    ptr->data = arr[i][j];
                    ptr->row = i;
                    ptr->col = j;
                    ptr->next = NULL;
                    head = ptr;
                    return head;
                }
                sparse *ptr = (sparse *)malloc(sizeof(sparse));
                ptr->col = j;
                ptr->row = i;
                ptr->data = arr[i][j];
                ptr->next = head;
                head = ptr;
                return head;
            }
        }
    }
}

int main()
{
    int r, c, arr[10][10], count = 0;
    char ch = 'y';
    printf("\nEnter how many number of rows: ");
    scanf("%d", &r);
    printf("\nEnter how many number of columns: ");
    scanf("%d", &c);
    printf("\n<-----------------Enter Your Matrix----------------->");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("\nEnter Element[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
            if (arr[i][j] == 0)
                count++;
        }
    }

    if (count >= (count / (r * c)) * 100)
    {
        printf("\nYes, Its a Sparse Matrix");
        fflush(stdin);
        head = createsparse(r, c, arr);
        printf("\nDo you want to print the sparce matrix(y/n): ");
        fflush(stdin);
        scanf("%c", &ch);
        if (ch == 'y')
            traverse();
    }
    else
        printf("\nNo, Its not a Sparse Matrix");

    return 0;
}