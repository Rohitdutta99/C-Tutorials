//Stack using array
#include<stdio.h>
#include<stdlib.h>

typedef struct stack{
    int size;
    int top;
    int *arr;
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
void push(stk* ptr, int val){
    if(isFull(ptr))
        printf("\nStack Overflow");
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int pop(stk *ptr){
    if(isEmpty(ptr)){
        printf("\nStack Underflow!!");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
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

int main()
{
    stk *s = (stk *)malloc(sizeof(stk));
    printf("\nEnter size of the array: ");
    scanf("%d",&s->size);
    s->top= -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("\n-----------------------------\n        Stack Created\n-----------------------------\n");

    
    char ch='y';
    int choice,val;
    while(ch=='y'){
        printf("\n-----------------------------\nPush Element: PRESS 1\nPop Element: PRESS 2\nCheck Stack Full: PRESS 3\nCheck Stack Empty: PRESS 4\nStack Top: PRESS 5\nStack Bottom: PRESS 6\nExit: PRESS 7\n-----------------------------\nEnter your choice: ");
        scanf("%d",&choice);
        printf("\n");
        switch (choice)
        {
        case 1: printf("\n<----------PUSH VALUE---------->\n");
                printf("\nEnter Value to Insert: ");
                scanf("%d",&val);
                push(s,val);
                TraverseStack(s);
                break;
        case 2: printf("\n<----------POP VALUE---------->\n");
                int n = pop(s);
                if(n!=-1)
                printf("\nDeleted %d from Stack\n",n);
                TraverseStack(s);
                break;
        case 3: printf("\n<----------CHECK STACK FULL OR NOT---------->");
                if(isFull(s))
                    printf("\n\nThe stack is Full");
                else
                printf("\n\nThe stack is not Full");
                break;
        case 4: printf("\n<----------CHECK STACK EMPTY OR NOT---------->");
                if(isEmpty(s))
                printf("\n\nThe stack is Empty");
                else
                printf("\n\nThe stack is not Empty");
                break;
        case 5: printf("\n<----------STACK TOP---------->");
                printf("\n\nStack top: %d\n",s->arr[s->top]);
                break;
        case 6: printf("\n<----------STACK BOTTOM---------->");
                printf("\n\nStack Bottom: %d\n",s->arr[0]);
                break;
        case 7: 
                exit(0);
                break;
        default:
            printf("\nInvalid Input!!");
            break;
        }
        printf("\nDo you want to Re-Enter (y/n): ");
        fflush(stdin);
        scanf("%c",&ch);
        if(s->top==s->size-1)
        {
            printf("\nStack is Full!!");
            break;
        }
    }
    
    printf("\nThank you!!");
    return 0;
}