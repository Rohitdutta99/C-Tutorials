// Multiple Parenthesis matching practice 4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack
{
    int size;
    int top;
    char *arr;
} stk;


//isFull
int isFull(stk *s)
{
    if(s->top==s->size-1)
    return 1;
    else
    return 0;
}

//isEmpty
int isEmpty(stk *s){
    if(s->top==-1)
    return 1;
    else
    return 0;
}

//PUSH
void push(stk *s, char val)
{
    if(isFull(s)){
        printf("\nStack Overflow!!");
        return;
    }
    s->arr[++s->top]=val;
}

//POP
char pop(stk *s){
    if(isEmpty(s)){
        printf("\nStack Underflow!!");
    }
    else{
        char val = s->arr[s->top--];
        return val;
    }
}

//STACKTOP
int stacktop(stk *sp)
{
    return sp->arr[sp->top];
}

//PRECEDENCE
int precedence(char ch){
    if(ch=='*' || ch=='/')
    return 3;
    else if (ch == '+' || ch == '-')
    return 2;
    else
    return 0;
}

//isOperator
int isoperator(char ch){
    if(ch =='*' || ch == '/' || ch == '+' || ch == '-')
    return 1;
    else
    return 0;
}


//Infix_to_Postfix
char * infixtopostfix(char *infix)
{
        
    stk *sp = (stk*)malloc(sizeof(stk));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char *postfix = (char *)malloc((strlen(infix)+1) * sizeof(char));
    int i=0; //track infix traversal
    int j=0; // track postfix traversal
    while (infix[i]!='\0')
    {
        if(!isoperator(infix[i])){
            postfix[j++]=infix[i++];
        }
        else{
            if(precedence(infix[i]) > precedence(stacktop(sp))){
                push(sp, infix[i++]);
            }
            else{
                postfix[j++]=pop(sp);
            }
        }
    }
    while (!isEmpty(sp))
    {
        postfix[j++]=pop(sp);
    }
    postfix[j]='\0';
    return postfix;
}


int main()
{
    char *infix = (char*)malloc(sizeof(char));
    printf("\nEnter an Infix expression: ");
    gets(infix);    
    printf("\nPostfix is: %s\n\n",infixtopostfix(infix));
    return 0;
}