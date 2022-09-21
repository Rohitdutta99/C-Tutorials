/*Question on 7.9.22

Merge two sorted single way linked list such that the merged list is also sorted.

Everyone send your attempt in group by today.
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct linkedlist
{
    int data;
    struct linkedlist *next;
} node;

void Traversal(node *head)
{
    node *p = head;
    int i = 1;
    while (p != NULL)
    {
        printf("\nElement %d: %d", i++, p->data);
        p = p->next;
    }
}
int c = 0;
/*
void merge(node *head, node *V1)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = head->data;
    node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
        c++;
    }
    p->next = V1;
}
*/
/*
void sort(node *head)
{
    node *p = head;
    node *cpt = head->next;
    for (int i = 0; p!=NULL; i++)
    {
        while (cpt->next != NULL)
        {
            if (cpt->data < p->data)
            {
                p->data = cpt->data ^ p->data;
                cpt->data = cpt->data ^ p->data;
                p->data = cpt->data ^ p->data;
            }
            cpt=cpt->next;
        }
        p=p->next;
        cpt=cpt->next;
    }
}*/
void reverse(node *head)
{
    node *p = head;
    node *v=p->next;
    while (p!=NULL)
    {
        while (v!=NULL)
        {
            v->data=v->next->data^v->data;
            v->next->data=v->next->data^v->data;
            v->data=v->next->data^v->data;

            v=v->next;
        }
        p=p->next;
        v=p->next;
    }
    Traversal(head);
}

int main()
{
    node *h1, *h2, *h3, *V1, *V2, *V3;
    h1 = (node *)malloc(sizeof(node));
    h2 = (node *)malloc(sizeof(node));
    h3 = (node *)malloc(sizeof(node));

    V1 = (node *)malloc(sizeof(node));
    V2 = (node *)malloc(sizeof(node));
    V3 = (node *)malloc(sizeof(node));

    h1->data = 1;
    h1->next = h2;
    h2->data = 4;
    h2->next = h3;
    h3->data = 7;
    h3->next = NULL;

    V1->data = 2;
    V1->next = V2;
    V2->data = 3;
    V2->next = V3;
    V3->data = 9;
    V3->next = NULL;

    /*
    Traversal(h1);
    printf("\n\n------------------------\n\n");
    Traversal(V1);
    */
    node *head = V1;
    reverse(head);
    
}