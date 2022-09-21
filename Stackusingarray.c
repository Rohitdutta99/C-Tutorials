// Stack Implementing using an Array
#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
// Stack is empty or not
int isEmpty(struct stack *s)
{
    if (s->top == -1)
        return 1;
    return 0;
}
// Stack is full or not
int isFull(struct stack *s)
{
    if (s->top == s->size - 1)
        return 1;
    return 0;
}
// pushing data in stack
void push(struct stack *ptr, int val)
{

    if (isFull(ptr))
    {
        printf("\nStack Overflow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
// Pop data from stack
int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
        printf("\nStack Underflow! Cannot pop from the stack\n");
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
// Peek each value of the stack
int Peek(struct stack *s, int i)
{
    int arrayInd = s->top - i + 1;
    if (arrayInd < 0)
    {
        printf("\n%d is Not a Valid position for stack\n", i);
        return -1;
    }
    return s->arr[arrayInd];
}
// Stack top finding
int stacktop(struct stack *s)
{
    return s->arr[s->top];
}
// Stack bottom value finding
int stackbottom(struct stack *s)
{
    return s->arr[0];
}
// Main start here
int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    int val, v = 0, choice;
    char ch = 'y';
    s->top = -1;
    printf("\nEnter the size of the stack: ");
    scanf("%d", &s->size);
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("\nStack has been created successfully\n");
CHOICE:
    printf("\nInput element to Stack: PRESS 1\nDelete Element from Stack: PRESS 2\nStacktop: PRESS 3\nStacbottom: PRESS 4\nExit: PRESS 5\nEnter your Choice: ");
    scanf("%d", &choice);
    if(choice == 1)
    ch='y';
    switch (choice)
    {
    case 1:
        // Calling funtion to take inputs in stack
        while (ch == 'y')
        {
            printf("\nEnter data to push: ");
            scanf("%d", &val);
            push(s, val);
            printf("\n------------------------\n");
            for (int i = 1; i <= s->top + 1; i++)
                printf("\nValue at Index %d is %d\n", i, Peek(s, i));
            printf("\n------------------------\n");
            if (v == s->size - 1)
                break;
            printf("\n\nDo you want to enter next value (y/n): ");
            fflush(stdin);
            scanf("%c", &ch);
            v++;
        }
        goto CHOICE;
        break;
    case 2:
        printf("\nPopped %d from the stack\n", pop(s));
        printf("\n------------------------\n");
        for (int i = 1; i <= s->top + 1; i++)
            printf("\nValue at Index %d is %d\n", i, Peek(s, i));
        printf("\n------------------------\n");
        goto CHOICE;
        break;
    case 3:
        printf("\n%d is the top most element of this stack\n", stacktop(s));
        goto CHOICE;
        break;
    case 4:
        printf("\n%d is the bottom most element of this stack\n", stackbottom(s));
        goto CHOICE;
        break;
    case 5:
        exit(0);
        break;
    default:
        printf("\nInvalid Input!!\n-----------------------------\n");
        goto CHOICE;
        break;
    }
    return 0;
}
