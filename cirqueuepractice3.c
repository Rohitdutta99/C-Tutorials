// Circular Queue using array practice 3 using pointer
#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
    int size;
    int f;
    int r;
    int *arr;
} que;

int isFull(que *q)
{
    if (q->f == (q->r+ 1) || (q->f == 0 && q->r == q->size-1))
        return 1;
    return 0;
}

int isEmpty(que *q)
{
    if (q->r == -1)
        return 1;
    return 0;
}

void enqueue(que *q, int val) 
{
    if (isFull(q))
    {
        printf("\nThe Queue is Full!!");
        return;
    }
    if (isEmpty(q))
        q->r = q->f = 0;
    else
        q->r = (q->r + 1) % q->size;
    
    q->arr[q->r] = val; 
}

void dequeue(que *q)
{
    if (isEmpty(q)){
        printf("\nThe Queue is Empty!!");
        return;
    }    

    printf("\n%d is Deleted Successfully!!",q->arr[q->f]);
    if (q->f == q->r)
        q->f = q->r = -1;
    else
        q->f = (q->f + 1) % q->size;
}

void traversal(que *q)
{
    int i = q->f;
    printf("\n\n");
    if (isEmpty(q))
    {
        printf("\nQueue is Empty!!");
        return;
    }

    while (i != q->r)
    {
        printf(" %d ", q->arr[i]);
        i = (i + 1) % q->size;
    }
    printf(" %d ", q->arr[i]);
}

int main()
{
    que *q;
    printf("\nEnter the size of the Queue: ");
    scanf("%d", &q->size);
    q->f = q->r = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));
    printf("\n<-------------QUEUE CREATED------------->\n");

    int ele, ch, choice = 1;
    while (choice == 1)
    {
        printf("\nEnter Element in Queue: PRESS 1\nDelete Element in Queue: PRESS 2\nCheck isFull: PRESS 3\nCheck isEmpty: PRESS 4\nExit: PRESS 5\n-----------------------------\nEnter Your Choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\n<---------Enqueue------------->\n");
            printf("\n\nEnter value to enter: ");
            scanf("%d", &ele);
            enqueue(q,ele);
            printf("\n---------------------");
            traversal(q);
            printf("\n---------------------");
            break;

        case 2:
            printf("\n<---------Dequeue------------->\n");
            dequeue(q);
            printf("\n---------------------");
            traversal(q);
            printf("\n---------------------");
            break;
        case 3:
            if (isFull(q))
                printf("\nThe Queue is Full!!\n\n");
            else
                printf("\nThe Queue is not Full!!\n\n");
            break;
        case 4:
            if (isEmpty(q))
                printf("\nThe Queue is Empty!!\n\n");
            else
                printf("\nThe Queue is not Empty!!\n\n");
            break;
        case 5:
            choice = -1;
            break;
        default:
            printf("\nInvalid Input!!");
        }
    }
    printf("\nThank You!!");
    return 0;
}