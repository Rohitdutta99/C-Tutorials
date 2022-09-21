// Doubly linked list counting nodes MAM
#include<stdio.h>
#include<stdlib.h>
typedef struct doubley
{
    int data;
    struct doubley *next;
    struct doubley *prev;
}node;

node *head = NULL;

void display()
{
    node *p = head;
    int i = 1;
    printf("\n\n------------------------");
    while (p != NULL)
    {
        printf("\nElement %d: %d\n", i++, p->data);
        p = p->next;
    }
    printf("------------------------\n\n");
}

void insertatstart(int val)
{
    if(head==NULL)
    {
        node *ptr=(node*)malloc(sizeof(node));
        ptr->data=val;
        ptr->next=NULL;
        head=ptr;
        
        return;
    }
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = val;
    ptr->next = head;
    head = ptr;
    
    return;
}

void insertatend(int val)
{
    if (head == NULL)
    {
        insertatstart(val);
        return;
    }
    node *ptr = (node *)malloc(sizeof(node));
    node *p = head;
    ptr->data = val;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next=ptr;
    ptr->prev=p;
    ptr->next = NULL;
    
}

void insertatpos()
{
    if(head==NULL)
    {
        printf("\nThe list is Empty!!\n");
        return;
    }

    int item;
    printf("\nAfter which element you want to Enter: ");
    scanf("%d",&item);
    node *p = head;

    while (p->data != item && p->next != NULL)
    {
        p = p->next;
    }
    if (p->data == item)
    {
        int val;
        printf("\nEnter value to insert: ");
        scanf("%d", &val);
        node *ptr = (node *)malloc(sizeof(node));
        
        ptr->data = val;
        ptr->next = p->next;
        ptr->prev=p;
        p->next = ptr;
        
        display();
        return;
    }
    printf("\n\n%d is not available in this linked list, so can't insert!\n",item);
}

int search(int val)
{
    if(head == NULL)
    {
        printf("\nThe Linked List is Empty!!");
        return -1;
    }
    int i=1;
    node *p = head;
    while (p != NULL && p->data != val)
    {
        p=p->next;
        i++;
    }
    if(p->data==val)
        return i;
    return -1;
}

void deleteatstart()
{
    if(head==NULL)
    {
        printf("\nThe linked list is Empty, so can't delete!");
        return;
    }
    node *p =head;
    int val = head->data;
    head=head->next;
    free(p);
    
    printf("\n%d Deleted Successfully!!",val);
}

void deleteatend()
{
    if(head==NULL)
    {
        printf("\nThe linked list is Empty, so can't delete!");
        return;
    }

    node *p=head;

    while (p->next!=NULL)
    {
        p=p->next;
    }
    node *v=p;
    int val = p->data;
    (p->prev)->next=NULL;
    free(v);
    
    printf("\n%d Deleted Successfully!!",val);
}

void deleteatindex()
{
    if(head==NULL)
    {
        printf("\nThe linked list is Empty, so can't delete!");
        return;
    }

    int item;
    printf("\nEnter element you want to delete: ");
    scanf("%d",&item);

    node *p = head;
    while (p->data != item && p->next != NULL)
    {
        p = p->next;
    }

    if (p->data == item)
    {
        node *v=p;
        int val=p->data;
        (p->prev)->next=p->next;
        free(v);
        
        printf("\n%d Deleted Successfully!!",val);
        return;
    }
    printf("\n%d is not available in this linked list",item);
}

int nodescount()
{
    node *p=head;
    int c=0;
    while (p!=NULL)
    {
        p=p->next;
        c++;
    }
    return c;    
}

int main()
{
    int val, n, item, s;
    char ch = 'y';

    while (ch == 'y')
    {
        printf("\n\nInsert at Beginning: PRESS 1\nInsert at End: PRESS 2\nInsert after a particular position: PRESS 3\nDisplay: PRESS 4\nSearch an element: PRESS 5\nDetete at Beginning: PRESS 6\nDelete at End: PRESS 7\nDelete at any particular position: PRESS 8\nCount of how many nodes: PRESS 9\nExit: PRESS 10\n\nEnter your choice: ");
        scanf("%d", &n);
        switch(n)
        {
        case 1:
            printf("\n<---------Insert at Beginning--------->\n");
            printf("\nEnter value to insert: ");
            scanf("%d", &val);
            insertatstart(val);
            display();
            break;
        case 2:
            printf("\n<---------Insert at End--------->\n");
            printf("\nEnter value to insert: ");
            scanf("%d", &val);
            insertatend(val);
            display();
            break;
        case 3:
            printf("\n<---------Insert at any position--------->\n");
            insertatpos();
            break;
        case 4:
            printf("\n<---------Elements of Linked List--------->\n");
            display();
            printf("\n<----------------------------------------->\n");
            break;
        case 5:
            printf("\n<---------search element in linked list--------->\n");
            printf("\nEnter element to search: ");
            scanf("%d",&s);
            if(search(s)!=-1)
                printf("\nElement %d is found at %dth node!\n",s,search(s));
            else
                printf("\nElement %d is not in the linked list!\n",s);
            break;
        case 6:
            printf("\n<---------Delete at Beginning--------->\n\n");
            deleteatstart();
            break;
        case 7:
            printf("\n<---------Delete at End--------->\n\n");
            deleteatend();
            break;
        case 8:
            printf("\n<---------Delete at any particular position--------->\n\n");
            deleteatindex();
            break;
        case 9:
            printf("\n<---------Number of Nodes--------->\n\n");
            printf("\nTotal number of nodes: %d",nodescount());
            break;
        case 10:
            printf("\nThank You!");
            ch='n';
            break;
        default:
            printf("\nInvalid Option!!\n");
            break;
        }
    }
    return 0;
}