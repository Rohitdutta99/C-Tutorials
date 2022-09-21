// Multiple paranthesis practice 3
#include<stdio.h>
#include<stdlib.h>
typedef struct stack{
    int top;
    int size;
    char *arr;
}stk;



//Stack empty or not check
int isEmpty(stk *sp){
    if(sp->top == -1)
        return 1;
    return 0;
}

//Stack is Full or not Check
int isFull(stk *sp){
    if(sp->top == sp->size-1)
        return 1;
    return 0;
}

// Push
void push(stk *sp,char val){
    if(isFull(sp))
        printf("\nStack Overflow");
    else{
        sp->top++;
        sp->arr[sp->top]=val;
    }
}

char pop(stk *sp){
    if(isEmpty(sp)){
        printf("\nStack Underflow!!");
        return -1;
    }
    else{
        char val = sp->arr[sp->top];
        sp->top--;
        return val;
    }
}
int ismatch(char a, char b){
    if(a == '(' && b == ')')
        return 1;
    if(a = '{' && b == '}')
        return 1;
    if(a == '[' && b == ']')
        return 1;
    return 0;
}
int paranthesismatch(char *val){
    
    stk *sp;
    sp->size = 100;
    sp->top= -1;
    sp->arr = (char *)malloc(sp->size *sizeof(char));
    char popped_ch;

    for (int i = 0; val[i] != '\0'; i++)
    {
        if(val[i] == '(' || val[i] == '{' || val[i] == '['){
            push(sp,val[i]);
        }
        else if(val[i] == '}' || val[i] == '}' || val[i] == ']'){
            if(isEmpty(sp)){
                return 0;
            }
            popped_ch = pop(sp);
            if(!ismatch(popped_ch,val[i]));
                return 0;
        }
    }
    if(isEmpty(sp))
        return 1;
    return 0;
}
int main()
{
    char *val;
    printf("\nEnter any expression: ");
    gets(val);

    if(paranthesismatch(val)){
        printf("\nThe paranthesis is matching");
    }
    else{
        printf("\nThe paranthesis is not matching");
    }
    return 0;
}