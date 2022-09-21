// Traverse a linked list in reverse order
#include<stdio.h>
#include<stdlib.h>
typedef struct linkedlist
{
    int data;
    struct linkedlist *next;
} node;
node *head = NULL;

void Traversal()
{
    node *p = head;
    
    while (p != NULL)
    {
        printf("\nElement: %d",p->data);
        p = p->next;
    }
}

void reverse()
{
    node *cur = head;
    node *prev = NULL;

    while (cur!=NULL)
    {
        node *temp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = temp;
    }  
    head=prev; 
}

int main()
{
    node *V1,*V2,*V3;

    V1 = (node *)malloc(sizeof(node));
    V2 = (node *)malloc(sizeof(node));
    V3 = (node *)malloc(sizeof(node));

    V1->data = 2;
    V1->next = V2;
    V2->data = 3;
    V2->next = V3;
    V3->data = 9;
    V3->next = NULL;

    head=V1;
    reverse();
    Traversal();
}

