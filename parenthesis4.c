// Parenthesis matching practice 4
#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int size;
    int top;
    char *arr;
} stk;


int isFull(stk *s)
{
    if(s->top==s->size-1)
    return 1;
    else
    return 0;
}


int isEmpty(stk *s){
    if(s->top==-1)
    return 1;
    else
    return 0;
}


void push(stk *s, char val)
{
    if(isFull(s)){
        printf("\nStack Overflow!!");
    }
    else
    {
        s->top++;
        s->arr[s->top]=val;
    }
}


char pop(stk *s){
    if(isEmpty(s)){
        printf("\nStack Underflow!!");
    }
    else{
        char val = s->arr[s->top];
        s->top--;
        return val;
    }
}


int parenthesis(char *exp){
    stk *s = (stk *)malloc(sizeof(stk));
    s->size = 20;
    s->top = -1;
    s->arr = (stk *)malloc(s->size * sizeof(stk));
    
    for (int i = 0; exp[i]!='\0'; i++)
    {
        if(exp[i]=='(')
        {
            push(s,exp[i]);
        }
        else if(exp[i]==')')
        {
            if(isEmpty(s))
            {
                return 0;
            }
            pop(s);
        }
    }
    if(isEmpty(s))
    return 1;
    else
    return 0;
}


int main()
{
    char *exp = "8)(4+5)";
    if(parenthesis(exp))
    printf("\nThe parenthesis is matching");
    else
    printf("\nThe parenthesis is Not matching");
    return 0;
}