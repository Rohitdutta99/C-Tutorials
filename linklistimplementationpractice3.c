//Linked list implementation practice 3
#include<stdio.h>
#include<stdlib.h>

typedef struct list{
    int data;
    struct list *next;
}node;

int main()
{
    int choice;
    node *head = NULL;

    printf("Enter a number to push: ");
    node *ptr = (node *)malloc(sizeof(node));
    scanf("%d",&ptr->data);

    printf("Data is: %d",ptr->data);
    return 0;
}