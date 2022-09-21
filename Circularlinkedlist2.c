// WACP to implement Circular Queue (with updated Delete function of Circular Q as shown in picture attached)
#include<stdio.h>
#include<stdlib.h>
typedef struct cirqueue{
    int size;
    int f;
    int r;
    int *arr;
}que;

//isFull
int isFull(que *q){
    if((q->r+1)%q->size == q->f)
        return 1;
    return 0;
}

//isEmpty
int isEmpty(que *q){
    if(q->r == -1 || q->f == -1)
        return 1;
    return 0;
}

void enqueue(que *q, int val){
    if(isFull(q)){
        printf("\nThis Queue is Full!!!\n");
    }
    else{
        q->r = (q->r + 1)%q->size;
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
        q->f = (q->f + 1)%q->size;
        a = q->arr[q->f];
    }
    return a;
}

// Traverse Queue
void Traverse(que q){
    
    for (int i = q.f,j = 1; i != q.r; i++, j++)
        printf("\n\nElement %d: %d",j,q.arr[i]);
}
int main()
{
    que q;
    printf("\nEnter the size of the Queue: ");
    scanf("%d",&q.size);
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    
    if(isEmpty(&q))
    printf("\nThe Queue is Empty\n");

    //Enqueue
    enqueue(&q, 12);
    enqueue(&q, 45);
    enqueue(&q, 15);
    
    Traverse(q);

    printf("\n\nDequeing Element: %d",dequeue(&q));

    Traverse(q);
    
    enqueue(&q, 22);
    
    Traverse(q);
    return 0;

}