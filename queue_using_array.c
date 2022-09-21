// Circular Queue using array
#include<stdio.h>
#include<stdlib.h>
typedef struct queue{
    int size;
    int f;
    int r;
    int *arr;
}que;
int v=0;
int isEmpty(que *q){
    if(q->r==q->f)
        return 1;
    return 0;
}

int isFull(que *q){
    if((q->r+1)%q->size == q->f)
        return 1;
    return 0;
}
void enqueue(que *q, int val){
    if(isFull(q))
        printf("\nStack Overflow!!");
    else{
        if(v==0)
        {
            q->arr[q->r]=val;
            v++;
        }
        else{
        q->r = (q->r+1)%q->size;
        q->arr[q->r] = val;
        }
    }
}

int dequeue(que *q){
    int val = -1;
    if(isEmpty(q)){
    printf("\nStack Underflow!!");
    return val;
    }
    val = q->arr[q->f];
    q->f = (q->f+1)%q->size;
    
    return val;
}

void traversal(que *q){
    printf("\n\n");
    int i = q->f;
    while(i<=q->r)
    {
        printf("\n%d)  %d\t",i,q->arr[i++]);
    }
}
int main()
{
    que q;
    printf("\nEnter the size of the Queue: ");
    scanf("%d",&q.size);
    q.f = q.r = 0;
    q.arr = (int*)malloc(q.size * sizeof(int));
    printf("\n<-------------QUEUE CREATED------------->");

    int ele,ch,choice = 1;
    while (choice==1)
    {
        printf("\nEnter Element in Queue: PRESS 1\nDelete Element in Queue: PRESS 2\nCheck isFull: PRESS 3\nCheck isEmpty: PRESS 4\nExit: PRESS 5\n-----------------------------\nEnter Your Choice: ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            printf("\n<---------Enqueue------------->\n");
            printf("\n\nEnter value to enter: ");
            scanf("%d",&ele);
            enqueue(&q,ele);
            printf("\n---------------------");
            traversal(&q);
            printf("\n---------------------");
            break;
        case 2:
            printf("\n<---------Dequeue------------->\n");
            printf("\n\n%d is Deleted",dequeue(&q));
            printf("\n---------------------");
            traversal(&q);
            printf("\n---------------------");
            break;
        case 3:
            if(isFull(&q))
            printf("\nThe Queue is Full!!\n\n");
            else
            printf("\nThe Queue is not Full!!\n\n");
            break;
        case 4:
            if(isEmpty(&q))
            printf("\nThe Queue is Empty!!\n\n");
            else
            printf("\nThe Queue is not Empty!!\n\n");
            break;
        case 5:
            choice = -1;
            break;
        default:
            printf("\nInvalid Input!!");
            break;
        }
    }
    printf("\nThank You!!");
    
    return 0;
}