// Queue using Linked list with size limit
#include <stdio.h>
#include <stdlib.h>
typedef struct queue
{
    int data;
    struct queue *next;
} que;

que *f = NULL, *r = NULL;
int c=-1, size;

void Traversal()
{
    que *p = f;
    int i = 1;
    while (p != r)
    {
        printf("\nElement %d: %d", i++, p->data);
        p = p->next;
    }
    printf("\nElement %d: %d", i++, p->data);
}

void enqueue(int val)
{
    if(c==size-1){
        printf("\nThe Queue is Full!!\n");
    }
    else{
        que *ptr = (que *)malloc(sizeof(que));
        ptr->data = val;
        ptr->next = NULL;
        if(f==NULL)
            f=r=ptr;
        else{
            r->next = ptr;
            r = ptr;
        }
        c++;    
    }
}

int dequeue(){
    int val = -1;
    que *n = f;
    if(f==NULL)
    {
        printf("\nThe Queue is Empty!!\n");
        return val;
    }
    
    val = n->data;
    f = f->next;
    free(n);
    return val;
}
int main()
{
    printf("\nEnter the size of the queue: ");
    scanf("%d",&size);
    printf("\nDequeueing Element %d\n",dequeue());
    enqueue(32);
    enqueue(45);
    enqueue(12);
    enqueue(10);
    enqueue(33);
    printf("\n-----------------------\n");
    Traversal();
    printf("\n\n-----------------------\n");

    printf("\nDequeueing Element %d\n",dequeue());

    printf("\n-----------------------\n");
    Traversal();
    printf("\n\n-----------------------\n");
    return 0;
}