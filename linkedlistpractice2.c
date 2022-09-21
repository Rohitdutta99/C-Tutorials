// Linkedlist Insertion and deletion
#include <stdio.h>
#include <stdlib.h>
typedef struct List
{
    int data;
    struct List *next;
}node;
int count = 0;
// Insert at beginning
node *insertatstart(node *head, int num)
{
    if (head == NULL)
    {
        node *ptr = (node *)malloc(sizeof(node));
        ptr->data = num;
        ptr->next = NULL;
        head = ptr;
        count++;
        return head;
    }
    else
    {
        node *ptr = (node *)malloc(sizeof(node));
        ptr->data = num;
        ptr->next = head;
        head = ptr;
        count++;
        return head;
    }
}
// Insert at between
node *insertatbetween(node *head, int data)
{
    if (head == NULL)
    {
        return insertatstart(head, data);
        
    }
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = data;
    ptr->next = head->next;
    head->next = ptr;
    count++;
    return head;
}
// Insert at End
node *insertatEnd(node *head, int data)
{
    if (head == NULL)
    {
        head = insertatstart(head, data);
        return head;
    }
    node *ptr = (node *)malloc(sizeof(node));
    node *p = head;
    ptr->data = data;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    count++;
    return head;
}
// Insert  at a particular Index
node *insertatindex(node *head, int data, int item)
{
    if (head == NULL)
    {
        head = insertatstart(head, data);
        return head;
    }
    node *ptr = (node *)malloc(sizeof(node));
    node *p = head;
    while (p->data != item && p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    count++;
    return head;
}
// Delete at First
node *deleteatfirst(node *head)
{
    if (head == NULL)
    {
        printf("\nThe List is Empty\n");
        return head;
    }
    else
    {
        node *ptr = head;
        head = head->next;
        free(ptr);
        printf("\nDeletion Successful!!\n");
        count--;
        return head;
    }
}
// Delete at Between
node *deleteatbetween(node *head)
{
    if (head == NULL)
    {
        printf("\nThe List is Empty\n");
        return head;
    }
    else
    {
        node *ptr = head->next;
        head->next = ptr->next;
        free(ptr);
        printf("\nDeletion Successful!!\n");
        count--;
        return head;
    }
}
// Delete at End
node *deleteatEnd(node *head)
{
    if (head == NULL)
    {
        printf("\nThe List is Empty\n");
        return head;
    }
    if (count == 1)
    {
        return deleteatfirst(head);
    }
    else
    {
        node *p = head;
        node *q = head->next;

        while (q->next != NULL)
        {
            q = q->next;
            p = p->next;
        }
        p->next = NULL;
        free(q);
        printf("\nDeletion Successful!!\n");
        count--;
        return head;
    }
}
// Delete a particular node
node *deletenode(node *head, int data)
{
    if (head->data = data)
    {
        node *p = head;
        head = head->next;
        free(p);
        printf("\nDeletion Successful!!\n");
        count--;
        return head;
    }
    node *p = head;
    node *q = head->next;
    while (q->data != data)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    printf("\nDeletion Successful!!\n");
    count--;
    return head;
}
// Linked list Traversal
void ListTraversal(node *head)
{
    int i = 1;
    node *p = head;
    while (p != NULL)
    {
        printf("\nElement %d: %d\n", i, p->data);
        p = p->next;
        i++;
    }
}
int main()
{
    int choice, num, item,ch=1;
    node *head = NULL;
    while (ch == 1)
    {
    LOOP:
        printf("\n------------------------------------------\nInsert at Beginning: PRESS 1\nInsert at between: PRESS 2\nInsert at End: PRESS 3\nInsert at a particular Index: PRESS 4\nDelete at beginning: PRESS 5\nDelete at Between: PRESS 6\nDelete at End: PRESS 7\nDelete a particular Element: PRESS 8\nExit: PRESS 9\n------------------------------------------\nEnter Your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n<-----Insert at Beginning----->\n");
            printf("\nEnter data: ");
            scanf("%d", &num);
            head = insertatstart(head, num);
            printf("\n-----------------------\n");
            ListTraversal(head);
            break;
        case 2:
            printf("\n<-----Insert at Between----->\n");
            printf("\nEnter data: ");
            scanf("%d", &num);
            head = insertatbetween(head, num);
            printf("\n-----------------------\n");
            ListTraversal(head);
            break;
        case 3:
            printf("\n<-----Insert at End----->\n");
            printf("\nEnter data: ");
            scanf("%d", &num);
            head = insertatEnd(head, num);
            printf("\n-----------------------\n");
            ListTraversal(head);
            break;
        case 4:
            printf("\n<-----Insert at a particular Index----->\n");
            if (head == NULL)
            {
                printf("\nEnter data: ");
                scanf("%d", &num);
                head = insertatstart(head, num);
                printf("\n-----------------------\n");
                ListTraversal(head);
            }
            else
            {
                printf("\nEnter the element after which you want to insert: ");
                scanf("%d", &item);
                printf("\nEnter data: ");
                scanf("%d", &num);
                head = insertatindex(head, num, item);
                printf("\n-----------------------\n");
                ListTraversal(head);
            }
            break;
        case 5:
            if (head == NULL)
            {
                printf("\n--------------------\nThe List is Empty\n--------------------\n");
                goto LOOP;
            }
            printf("\n<-----Delete at Beginning----->\n");
            head = deleteatfirst(head);
            printf("\n-----------------------\n");
            ListTraversal(head);
            break;
        case 6:
            if (head == NULL)
            {
                printf("\n--------------------\nThe List is Empty\n--------------------\n");
                goto LOOP;
            }
            printf("\n<-----Delete at Between----->\n");
            head = deleteatbetween(head);
            printf("\n-----------------------\n");
            ListTraversal(head);
            break;
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
            head = deletenode(head, item);
            printf("\n-----------------------\n");
            ListTraversal(head);
            break;
        case 9:
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
    printf("\nThank You!!");
    return 0;
}