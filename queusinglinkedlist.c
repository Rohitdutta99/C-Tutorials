// Queue using Linked list
#include <stdio.h>
#include <stdlib.h>
typedef struct queue
{
    int data;
    struct queue *next;
} que;

que *f = NULL, *r = NULL;

void Traversal()
{
    que *p = f;
    int i = 1;
    while (p != NULL)
    {
        printf("\nElement %d: %d", i++, p->data);
        p = p->next;
    }
}

void enqueue(int val)
{
    que *ptr = (que *)malloc(sizeof(que));
    if(ptr==NULL){
        printf("\nThe Queue is Full!!");
    }
    else{
        ptr->data = val;
        ptr->next = NULL;
        if(f==NULL)
            f=r=ptr;
        else{
            r->next = ptr;
            r = ptr;
        }    
    }
}

int dequeue(){
    int val = -1;
    que *n = f;
    if(f==NULL)
    {
        printf("\nThe Queue is Empty!!");
        return val;
    }
    
    val = n->data;
    f = f->next;
    free(n);
    return val;
}
int main()
{
    printf("\nDequeueing Element %d\n",dequeue());
    enqueue(32);
    enqueue(45);
    enqueue(12);
    Traversal();

    printf("\nDequeueing Element %d\n",dequeue());
    return 0;
}