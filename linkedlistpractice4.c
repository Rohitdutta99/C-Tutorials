// Linked list practice 4 college
#include <stdio.h>
#include <stdlib.h>
typedef struct linkedlist
{
    int data;
    struct linkedlist *next;
} node;

node *head = NULL;

void insertatstart(int val)
{
    if (head == NULL)
    {
        node *ptr = (node *)malloc(sizeof(node));
        ptr->data = val;
        ptr->next = NULL;
        head = ptr;
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
    ptr->data = val;
    node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
}

int insertatpos(int val, int item)
{
    if(head==NULL)
        return -1;

    node *ptr = (node *)malloc(sizeof(node));
    node *p = head;
    ptr->data = val;
    while (p->data != item && p->next != NULL)
    {
        p = p->next;
    }
    if (p->data == item)
    {
        ptr->next = p->next;
        p->next = ptr;
        return val;
    }
    return -1;
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

int main()
{
    int val, n, item, s;
    char ch = 'y';

    while (ch == 'y')
    {
        printf("\n\nInsert at Beginning: PRESS 1\nInsert at End: PRESS 2\nInsert after a particular position: PRESS 3\nDisplay: PRESS 4\nSearch an element: PRESS 5\nExit: PRESS 6\n\nEnter your choice: ");
        scanf("%d", &n);
        switch (n)
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
            printf("\nEnter value to insert: ");
            scanf("%d", &val);
            printf("\nAfter which element you want to Enter: ");
            scanf("%d",&item);
            if(insertatpos(val,item)==-1)
                printf("\n%d is not available in this linked List",item);
            else
                display();
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