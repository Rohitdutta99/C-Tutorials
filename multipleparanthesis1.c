//Multiple Paranthesis matching using stack using array
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

int match(char a, char b){
    if(a == '(' && b == ')')
        return 1;
    if(a = '{' && b == '}')
        return 1;
    if(a == '[' && b == ']')
        return 1;
    return 0;
}

// Paranthesis match function
int paranthesismatch(char *exp){
    stk *sp;
    char popped_ch;
    sp->size = 50;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    int i;
    for(i=0; exp[i]!='\0'; i++){
        if(exp[i]=='(' || '{' || '[')
            push(sp,exp[i]);

        else if(exp[i]==')' || '}' || ']'){
            if(isEmpty(sp))
                return 0;
            popped_ch = pop(sp);
            if(!match(popped_ch,exp[i]));
                return 0;
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