// Implementing Stack using Linked List
#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} node;
node *top = NULL;
// Stack is empty or not
int isEmpty()
{
    if (top == NULL)
        return 1;
    return 0;
}
// Stack is full or not
int isFull()
{
    node *p = (node *)malloc(sizeof(node));
    if (p == NULL)
        return 1;
    return 0;
}
// pushing data in stack
node *push(node *top, int x)
{
    if (isFull())
    {
        printf("\nStack Overflow!!\n");
    }
    else
    {
        node *n = (node *)malloc(sizeof(node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}
// Pop data from stack
int pop(node *tp)
{
    if (isEmpty())
    {
        printf("\nStack Underflow!!\n");
    }
    else
    {
        node *n = tp;
        top = (tp)->next;
        int x = n->data;
        free(n);
        return x;
    }
}
// Peek each value of the stack
int ispeek(int index)
{
    node *p=top;
    for (int i = 1; (i < index && p!=NULL); i++)
    {
        p=p->next;
    }
    if(p!=NULL){
        return p->data;
    }
    else
    {
        return -1;
    }
    
}
// Stack top finding
int isTop()
{
    return top->data;
}
// Stack bottom value finding
node *isbottom(node *top)
{
    while (top->next != NULL)
    {
        top = top->next;
    }
    return top;
}
// List printing function
void LinkedListTraversal(node *top)
{
    int i = 0;
    while (top != NULL)
    {
        printf("Element %d: %d\n", i + 1, top->data);
        top = top->next;
        i++;
    }
}
// Main start here
int main()
{
    
    top = push(top, 55);
    top = push(top, 22);
    top = push(top, 45);
    top = push(top, 32);
    top = push(top, 11);
    LinkedListTraversal(top);
    printf("\n-------------------------\n");
    int element = pop(top);
    printf("Popped element is %d\n", element);
    printf("\n-------------------------\n");
    LinkedListTraversal(top);
    int valuetop = isTop(top);
    printf("\n%d is the top most element in this stack\n", valuetop);
    node *valuebottom = isbottom(top);
    printf("\n%d is the bottom most element in this stack\n\n", valuebottom->data);
    printf("\nEnter index to peek: ");
    int index;
    scanf("%d", &index);
    printf("\n%d is the element present on %d index\n\n", ispeek(index), index);
    return 0;
}
