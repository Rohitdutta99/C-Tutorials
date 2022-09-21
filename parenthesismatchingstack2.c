//Paranthesis matching using stack using array
#include<stdio.h>
#include<stdlib.h>

typedef struct stack{
    int size;
    int top;
    char *arr;
}stk;

//Stack empty or not check
int isEmpty(stk *s){
    if(s->top == -1)
        return 1;
    return 0;
}

//Stack is Full or not Check
int isFull(stk *s){
    if(s->top == s->size-1)
        return 1;
    return 0;
}

// Push
void push(stk* ptr, char val){
    if(isFull(ptr))
        printf("\nStack Overflow");
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
char pop(stk *ptr){
    if(isEmpty(ptr)){
        printf("\nStack Underflow!!");
        return -1;
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
void TraverseStack(stk* ptr){
    printf("\n");
    for (int i = 0; i <= ptr->top; i++)
        printf("%d\t",ptr->arr[i]);
    printf("\n");
}

// PEEK
int peek(stk *s,int i){
    int arrayInd = s->top-i+1;
    if(arrayInd < 0){
    printf("\nNot a valid Position for the Stack\n");
    return -1;
    }
    else{
        return s->arr[arrayInd];
    }
}

// Paranthesis match function
int paranthesismatch(char *exp){
    stk *sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    for(int i=0; exp[i]!='\0'; i++){
        if(exp[i]=='(')
            push(sp,'(');

        else if(exp[i]==')'){
            if(isEmpty(sp))
                return 0;
            pop(sp);
        }
    }
    if(isEmpty(sp))
        return 1;
    return 0;
}
int main()
{
    char *exp="8*(9))";
    
    if(paranthesismatch(exp)){
        printf("\nThe parenthesis is matching");
    }    
    else{
        printf("\nThe parenthesis is not matching");
    }    
    return 0;
}