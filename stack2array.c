// Stack using array practice 2
#include <stdio.h>
#include <stdlib.h>
typedef struct stack
{
    int size;
    int top;
    int *arr;
} stk;
// Stack is full or not
int isfull(stk *sp)
{
    if (sp->top == sp->size - 1)
        return 1;
    return 0;
}
// Stack is Empty or not
int isempty(stk *sp)
{
    if (sp->top == -1)
        return 1;
    return 0;
}
// Push element into the stack
void push(stk *sp, int val)
{
    if (isfull(sp))
    {
        printf("\nStack Overflow!!\n");
    }
    else
    {
        sp->top++;
        sp->arr[sp->top] = val;
    }
}
// Pop element from the stack
int pop(stk *sp)
{
    if (isempty(sp))
    {
        printf("\nStack Underflow!!\a\n");
        return 0;
    }
    else
    {
        int val = sp->arr[sp->top];
        sp->top--;
        return val;
    }
}
// Peek function
int Peek(stk *sp, int i)
{
    int ary = sp->top - i + 1;
    if (ary < 0)
    {
        printf("\n%d is not a valid position!\n", i);
        return -1;
    }
    return sp->arr[ary];
}
// stacktop
int stacktop(stk *sp)
{
    if(isempty(sp))
        return -1;
    return sp->arr[sp->top];
}
// Stackbottom
int stackbottom(stk *sp)
{
    if(isempty(sp))
        return -1;
    return sp->arr[0];
}
// Main driver Function
int main()
{
    int choice, val = 0,v=0;
    char ch = 'y';
    stk *sp = (stk *)malloc(sizeof(stk));
    sp->top = -1;
    printf("\nEnter the size of the stack: ");
    scanf("%d", &sp->size);
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("----------------------------\nStack Created Succesfully!!\n----------------------------\n\n");
CHOICE:
    printf("\nInput element to Stack: PRESS 1\nDelete Element from Stack: PRESS 2\nStacktop: PRESS 3\nStacbottom: PRESS 4\nExit: PRESS 5\nEnter your Choice: ");
    scanf("%d", &choice);
    if(choice == 1)
    ch='y';
    switch (choice)
    {
    case 1:
        
        printf("\n<------------Input element to Stack------------>\n");
        while (ch == 'y')
        {
            printf("\nEnter data: ");
            scanf("%d", &val);
            push(sp, val);
            printf("\n------------------------\n");
            for (int i = 1; i <= sp->top + 1; i++)
                printf("\nValue at Index %d is %d\n", i, Peek(sp, i));
            printf("\n------------------------\n");
            if (sp->top == sp->size - 1){
                if(v==1)
                    break;
                else{
                    printf("\nStack Filled up\n");
                    v=1;
                    break;
                }
            }
            printf("\n\nDo you want to enter next value (y/n): ");
            fflush(stdin);
            scanf("%c", &ch);
        }
        goto CHOICE;
        break;
    case 2:
        printf("\n<------------Delete element from Stack------------>\n");
        int del=pop(sp);
        if(del == 0)
            goto CHOICE;
        printf("\nPopped %d from the stack\n", del);
        printf("\n------------------------\n");
        for (int i = 1; i <= sp->top + 1; i++)
            printf("\nValue at Index %d is %d\n", i, Peek(sp, i));
        printf("\n------------------------\n");
        goto CHOICE;
        break;
    case 3:
        if(stacktop(sp)==-1){
            printf("\nNo values in Stack\n");
            goto CHOICE;
        }
        printf("\n%d is the top most element of this stack\n", stacktop(sp));
        goto CHOICE;
        break;
    case 4:
        if(stackbottom(sp)==-1){
            printf("\nNo values in Stack\n");
            goto CHOICE;
        }
        printf("\n%d is the bottom most element of this stack\n", stackbottom(sp));
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