//Doubly linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *prev;
    struct node *next;
}list;
//List printing function
void LinkedListTraverse(list *head)
{
    int i=0;
    list *p=head;
    do
    {
        printf("\nElement %d: %d",++i,p->data);
        p=p->next;
    }while(p!=head);
}
//Insert at first
list *Insertatfirst(list *head, int item)
{
    list *ptr=(list*)malloc(sizeof(list));
    ptr->data=item;
    ptr->next=head;
    ptr->prev=head->prev;
    (head->prev)->next=ptr;
    head->prev=ptr;
    head=ptr;
    return head;
}
//Insert at between
list *Insertinbetween(list *head,int item)
{
    list *ptr=(list *)malloc(sizeof(list));
    ptr->data=item;
    ptr->next=head->next;
    ptr->prev=head;
    head->next=ptr;
}
//Insert at End
list *InsertatEnd(list *head,int item)
{
    list *ptr=(list *)malloc(sizeof(list));
    ptr->data=item;
    ptr->prev=head->prev;
    ptr->next=head;
    (head->prev)->next=ptr;
    head->prev=ptr;
    return head;
}
//Insert at a particular point
list *Insertnode(int item,list *head,int data)
{
    list *ptr=(list*)malloc(sizeof(list)),*p=head;
    ptr->data=data;
    while (p->data!=item){
        p=p->next;
    }
    if(p->next==head){
        head = InsertatEnd(head, data);
        return head;
    }
    ptr->next=p->next;
    (p->next)->prev=ptr;
    ptr->prev=p;
    p->next=ptr;
    return head;
}
int main()
{
    list *n1,*n2,*n3,*n4,*head;
    int n, in, item,index;
    char ch='y';
    //Create Nodes
    n1=(list *)malloc(sizeof(list));
    n2=(list *)malloc(sizeof(list));
    n3=(list *)malloc(sizeof(list));
    n4=(list *)malloc(sizeof(list));
    //Link Nodes
    n1->next=n2;
    n1->prev=n4;
    n1->data=44;

    head=n1;

    n2->next=n3;
    n2->prev=n1;
    n2->data=74;

    n3->next=n4;
    n3->prev=n2;
    n3->data=65;

    n4->next=n1;
    n4->prev=n3;
    n4->data=12;

    // calling function to traverse/read the linked list
    LinkedListTraverse(head);
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

            printf("\n<-------Insert at Beginning-------->\n");
            CASE1:
            printf("\nEnter the data: ");
            scanf("%d", &item);
            head = Insertatfirst(head, item);
            printf("\n-----------------------------\n");
            LinkedListTraverse(head);
            break;
        case 2:
            printf("\n<-------Insert in Between-------->");
            printf("\nEnter the data: ");
            scanf("%d", &item);
            head = Insertinbetween(head,item);
            printf("-----------------------------\n");
            LinkedListTraverse(head);
            break;
        case 3:
            printf("\n<-------Insert at End-------->");
            printf("\nEnter the data: ");
            scanf("%d", &item);
            head = InsertatEnd(head, item);
            printf("-----------------------------\n");
            LinkedListTraverse(head);
            break;

        case 4:
            printf("\n<-------Insert after a particular node-------->");
            printf("\nEnter after which data to insert: ");
            scanf("%d", &index);
            printf("\nEnter the data: ");
            scanf("%d", &item);
            head = Insertnode(index, head, item);
            printf("\n-----------------------------\n");
            LinkedListTraverse(head);
            break;/*
        case 5:
            head = deleteatstart(head);
            printf("-----------------------------\n");
            LinkedListTraversal(head);
            printf("\nDeletion Successful!!");
            break;
        case 6:
            head = deleteinbetween(head, n3);
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