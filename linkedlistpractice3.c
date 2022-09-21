// Linked list insertion and deletion

/*
What can be the cases for a linked list (INSERTION)?

Case 1: Insert at beginning
Case 2: Insert in between
Case 3: Insert at a particular index
Case 4: Insert at End
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct linkedlist
{
    int data;
    struct linkedlist *next;
} node;
node *head = NULL;

void Traversal()
{
    node *p = head;
    int i = 1;
    while (p != NULL)
    {
        printf("\nElement %d: %d", i++, p->data);
        p = p->next;
    }
}

// Insert at Start
node *insertatstart(int ele)
{
    if (head == NULL)
    {
        node *ptr = (node *)malloc(sizeof(node));
        ptr->data = ele;
        ptr->next = NULL;
        head = ptr;
        return head;
    }

    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = ele;
    ptr->next = head;
    head = ptr;
    return head;
}
// Insert in between
node *insertatbetween(int ele)
{
    if (head == NULL)
        return insertatstart(ele);
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = ele;
    ptr->next = head->next;
    head->next = ptr;
    return head;
}
// Insert at End
node *insertatEnd(int ele)
{
    if (head == NULL)
        return insertatstart(ele);
    node *ptr = (node *)malloc(sizeof(node));
    node *p = head;
    ptr->data = ele;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

// Insert after a particular node
node *insertatindex(int val, int item)
{
    if (head == NULL)
    {
        head = insertatstart(val);
        return head;
    }
    node *ptr = (node *)malloc(sizeof(node));
    node *p = head;
    while (p->data != item && p->next != NULL)
    {
        p = p->next;
    }
    ptr->next = p->next;
    p->next = ptr;
    ptr->data = val;
    return head;
}

//Delete at beginning
void deleteatstart(){
    
    node *ptr = head;
    head = head->next;
    free(ptr);
    printf("\nDeletion Successful!!\n");
    return;
}

//Delete in between
void deleteatbetween(){
    node *ptr = head;
}
int main()
{
    int ch = 1, choice, num, item;

    while (ch == 1)
    {
    LOOP:
        printf("\n-----------------------\nInsert at First: PRESS 1\nInsert in Between: PRESS 2\nInsert at End: PRESS 3\nInsert after a particular Index: PRESS 4\nDelete at Beginning: PRESS 5\nDelete at Between: PRESS 6\nExit: PRESS 7\n-----------------------\n\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n<-----Insert at Beginning----->\n");
            printf("\nEnter data: ");
            scanf("%d", &num);
            head = insertatstart(num);
            printf("\n-----------------------\n");
            Traversal();
            break;
        case 2:
            printf("\n<-----Insert at Between----->\n");
            printf("\nEnter data: ");
            scanf("%d", &num);
            head = insertatbetween(num);
            printf("\n-----------------------\n");
            Traversal();
            break;
        case 3:
            printf("\n<-----Insert at End----->\n");
            printf("\nEnter data: ");
            scanf("%d", &num);
            head = insertatEnd(num);
            printf("\n-----------------------\n");
            Traversal();
            break;

        case 4:
            printf("\n<-----Insert at a particular Index----->\n");
            if (head == NULL)
            {
                printf("\nEnter data: ");
                scanf("%d", &num);
                head = insertatstart(num);
                printf("\n-----------------------\n");
                Traversal();
            }
            else
            {
                printf("\nAfter which element you want to insert (Enter value): ");
                scanf("%d", &item);
                printf("\nEnter data: ");
                scanf("%d", &num);
                head = insertatindex(num, item);
                printf("\n-----------------------\n");
                Traversal();
            }
            break;
            
        case 5:
            if (head == NULL)
            {
                printf("\n--------------------\nThe List is Empty\n--------------------\n");
                goto LOOP;
            }
            printf("\n<-----Delete at Beginning----->\n");
            deleteatstart();
            printf("\n-----------------------\n");
            Traversal();
            break;
        case 6:
            if (head == NULL)
            {
                printf("\n--------------------\nThe List is Empty\n--------------------\n");
                goto LOOP;
            }
            printf("\n<-----Delete at Between----->\n");
            deleteatbetween();
            printf("\n-----------------------\n");
            Traversal();
            break;
            /*
        case 7:
            if (head == NULL)
            {
                printf("\n--------------------\nThe List is Empty\n--------------------\n");
                goto LOOP;
            }
            printf("\n<-----Delete at End----->\n");
            head = deleteatEnd(head);
            printf("\n-----------------------\n");
            ListTraversal(head);
            break;
        case 8:
            if (head == NULL)
            {
                printf("\n--------------------\nThe List is Empty\n--------------------\n");
                goto LOOP;
            }
            printf("\n<-----Delete a particular Element----->\n");
            printf("\nEnter the data to delete: ");
            scanf("%d", &item);
            head = deletenode(item);
            printf("\n-----------------------\n");
            ListTraversal(head);
            break;*/
        case 7:
            ch = 0;
            continue;
        default:
            printf("\n-----------------------\n");
            printf("\nInvalid Input!!\n");
            printf("\n-----------------------\n");
            goto LOOP;
            break;
        }
        printf("\n-----------------------\n");
    }
    printf("\nThank You\n\n");

    return 0;
}