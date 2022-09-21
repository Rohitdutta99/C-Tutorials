// Insertion in Linked list
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
//List printing function
void LinkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
//Insert anywhere in between as not specified by user
struct node *Insertinbetween(int index, struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    ptr->data = data;
    int i = 0;
    while (i != index - 1)
    {
        p = ptr->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
//Insert at beginning head position
struct node *InsertAtFirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
//Insert at End of the list
struct node *InsertatEnd(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
//Insert after a particular point specified by the user
struct node *Insertnode(struct node *prevnode, struct node *head,int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next=prevnode->next;
    prevnode->next=ptr;
    return head;
}

int main()
{
    struct node *head, *second, *third, *fourth, *index;
    int n, in,item;
    // allocate memory for nodes in the linked list in heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    index = (struct node *)malloc(sizeof(struct node));

    // link first and second nodes
    head->data = 7;
    head->next = second;

    // link second and third nodes
    second->data = 11;
    second->next = third;

    // link third to fourth node
    third->data = 45;
    third->next = fourth;

    // terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;

    // calling function to traverse/read the linked list
    LinkedListTraversal(head);
    // head = InsertAtFirst(head, 56);

    printf("-----------------------------\n");
    printf("Enter index to insert: \ni)Insert at beginning: PRESS 1\nii)Insert in Between: PRESS 2\niii)Insert at End: PRESS 3\niv)Insert after a particular node: PRESS 4\nEnter your choice: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        
        printf("\n<-------Insert at Beginning-------->");
        CASE1:
        printf("\nEnter the data: ");
        scanf("%d", &item);
        head = InsertAtFirst(head, item);
        printf("-----------------------------\n");
        LinkedListTraversal(head);
        break;
    case 2:
        printf("\n<-------Insert in Between-------->");

        printf("\nEnter the index: ");
        scanf("%d", &in);
        printf("\nEnter the data: ");
        scanf("%d", &item);
        head = Insertinbetween(in, head, item);
        printf("-----------------------------\n");
        LinkedListTraversal(head);
        break;
    case 3:
        printf("\n<-------Insert at End-------->");
        printf("\nEnter the data: ");
        scanf("%d", &item);
        head=InsertatEnd(head, item);
        printf("-----------------------------\n");
        LinkedListTraversal(head);
        break;

    case 4:
        printf("\n<-------Insert after a particular node-------->");
        printf("\nEnter index: ");
        scanf("%d",&index->data);
        if(index->data==0)
        goto CASE1;
        if(index->data==1)
        index=head;
        if(index->data==2)
        index=second;
        if(index->data==3)
        index=third;
        if(index->data==4)
        index=fourth;
        printf("\nEnter the data: ");
        scanf("%d", &item);
        head=Insertnode(index, head, item);
        printf("-----------------------------\n");
        LinkedListTraversal(head);
        break;
    default:
        exit(0);
        break;
    }
    return 0;
}