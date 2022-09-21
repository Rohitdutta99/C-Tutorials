// Implementing Stack using Linked List
#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} node;
typedef struct stack
{
    int size;
    int top;
    int *arr;
} stk;
// Stack is empty or not
int isEmpty(node *top)
{
    if (top == NULL)
        return 1;
    return 0;
}
// Stack is full or not
int isFull(node *top)
{
    node *p = (node *)malloc(sizeof(node));
    if (p == NULL)
        return 1;
    return 0;
}
// pushing data in stack
node *push(node *top, int x)
{
    if (isFull(top))
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
int pop(node **top)
{
    if (isEmpty(*top))
    {
        printf("\nStack Underflow!!\n");
    }
    else
    {
        node *n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}
// Peek each value of the stack

// Stack top finding

// Stack bottom value finding

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
    node *top = NULL;
    top = push(top, 55);
    top = push(top, 22);
    top = push(top, 45);
    top = push(top, 32);
    top = push(top, 11);
    LinkedListTraversal(top);
    printf("\n-------------------------\n");
    int element = pop(&top);
    printf("Popped element is %d\n",element);
    printf("\n-------------------------\n");
    LinkedListTraversal(top);
    return 0;
}
