// Parenthesis Matching Problem Using Stack Data Structure
//  Stack Implementing using an Array
#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    char *arr;
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
void push(struct stack *ptr, char val)
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
char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
        printf("\nStack Underflow! Cannot pop from the stack\n");
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int parenthesisMatch(char *exp)
{
    //create an initialize the stack
    struct stack *sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    for (int i = 0; exp[i]!='\0'; i++)
    {
        if(exp[i]=='('){
            push(sp,'(');
        }
        else if(exp[i]=='('){
            if(isEmpty(sp)){
                return 0;
            }
            pop(sp);
        }
    }
    if(isEmpty(sp)){
        return 1;
    }
    else{
        return 0;
    }
}
// Main start here
int main()
{
    char *exp="8*(9)";
    if(parenthesisMatch(exp)){
        printf("\nThe parenthesis is matching\n");
    }
    else{
        printf("\nParenthesis is not matching\n"); 
    }
    return 0;
}
