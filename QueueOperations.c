// WACP to implement Circular Queue (with updated Delete function of Circular Q as shown in picture attached)
#include<stdio.h>
#include<stdlib.h>
typedef struct queue{
    int size;
    int f;
    int r;
    int *arr;
}que;

int c = 0, v = 0;
//isFull
int isFull(que *q){
    if(q->r == q->size-1)
        return 1;
    return 0;
}

//isEmpty
int isEmpty(que *q){
    if(q->r == q->f)
        return 1;
    return 0;
}

void enqueue(que *q, int val){
    if(isFull(q)){
        printf("\nThis Queue is Full!!!\n");
    }
    else{
        q->r++;
        q->arr[q->r] = val;
    }
}

//DeQueue
int dequeue(que *q){
    int a = -1;
    if(isEmpty(q)){
        printf("\nThis Queue is Empty\n");
    }
    else{
        q->f++;
        a = q->arr[q->f];
        v++;
    }
    return a;
}

// Traverse Queue
void Traverse(que q){
    for (int i = v; i < c; i++)
    {
        printf("\n\nElement %d: %d",i+1,q.arr[i]);
    }
    
}
int main()
{
    que q;
    printf("\nEnter the size of the Queue: ");
    scanf("%d",&q.size);
    q.f = -1;
    q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    
    if(isEmpty(&q))
    printf("\nThe Queue is Empty\n");

    //Enqueue
    enqueue(&q, 12);
    c++;
    enqueue(&q, 45);
    c++;
    enqueue(&q, 15);
    c++;
    printf("\nDequeing Element: %d",dequeue(&q));

    Traverse(q);
    
    
    return 0;

}