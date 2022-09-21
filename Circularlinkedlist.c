//Circular List
// Insertion in Linked list
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
//List printing function
void LinkedListTraversal(struct node *head)
{
    int i=0;
    struct node *p=head;
    do
    {
        printf("\nElement %d: %d",++i,p->data);
        p=p->next;
    } while (p!=head);
}
//Insert at first
struct node *Insertatfirst(struct node *head, int data)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    ptr->data=data;
    while(p->next!=head){
        p=p->next;
    }
    ptr->next=head;
    p->next=ptr;
    head=ptr;
    return head;
} 
int main()
{
    struct node *head, *second, *third, *fourth;
    int n, in, item,index;
    char ch='y';
    // allocate memory for nodes in the linked list in heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

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
    fourth->next = head;

    // calling function to traverse/read the linked list
    LinkedListTraversal(head);
    printf("\n-----------------------------\n");
    while (ch == 'y')
    {
    LOOP:
        printf("-----------------------------\n");
        printf("i) Insert at beginning: PRESS 1\nii) Insert in Between: PRESS 2\niii) Insert at End: PRESS 3\niv) Insert after a particular node: PRESS 4\nv) Delete the first node: PRESS 5\nvi) Delete in between: PRESS 6\nvii) Delete at End: PRESS 7\nviii) Deletev any particular value: PRESS 8\nEnter your choice: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:

            printf("\n<-------Insert at Beginning-------->");
        CASE1:
            printf("\nEnter the data: ");
            scanf("%d", &item);
            head = Insertatfirst(head, item);
            printf("-----------------------------\n");
            LinkedListTraversal(head);
            break;/*
        case 2:
            printf("\n<-------Insert in Between-------->");
            printf("\nEnter the data: ");
            scanf("%d", &item);
            head = Insertinbetween(second, head, item);
            printf("-----------------------------\n");
            LinkedListTraversal(head);
            break;
        case 3:
            printf("\n<-------Insert at End-------->");
            printf("\nEnter the data: ");
            scanf("%d", &item);
            head = InsertatEnd(head, item);
            printf("-----------------------------\n");
            LinkedListTraversal(head);
            break;

        case 4:
            printf("\n<-------Insert after a particular node-------->");
            printf("\nEnter after which data to insert: ");
            scanf("%d", &index);
            printf("\nEnter the data: ");
            scanf("%d", &item);
            head = Insertnode(index, head, item);
            printf("-----------------------------\n");
            LinkedListTraversal(head);
            break;
        case 5:
            head = deleteatstart(head);
            printf("-----------------------------\n");
            LinkedListTraversal(head);
            printf("\nDeletion Successful!!");
            break;
        case 6:
            head = deleteinbetween(head, third);
            printf("-----------------------------\n");
            LinkedListTraversal(head);
            printf("\nDeletion Successful!!");
            break;
        case 7:
            head = deleteatend(head);
            printf("-----------------------------\n");
            LinkedListTraversal(head);
            printf("\nDeletion Successful!!");
            break;
        case 8:
            printf("\nEnter value to delete: ");
            scanf("%d", &index);
            head = deletenode(head,index);
            printf("-----------------------------\n");
            LinkedListTraversal(head);
            printf("\nDeletion Successful!!");
            break;*/
        default:
            goto LOOP;
            break;
        }
        printf("\n-----------------------------\n");
        printf("\nDo you want to enter again(y/n): ");
        fflush(stdin);
        scanf("%c", &ch);
        if (ch != 'y')
            exit(0);
    }
    

    
    return 0;
}