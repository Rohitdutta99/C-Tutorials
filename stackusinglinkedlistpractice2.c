// Stack using linked list 2 practice
#include <stdio.h>
#include <stdlib.h>
typedef struct list
{
    int data;
    struct list *next;
} node;
node* top = NULL;
// Is Empty function
int isempty()
{
    if (top == NULL)
        return 1;
    return 0;
}
// Is Full function
int isfull()
{
    node *ptr=(node *)malloc(sizeof(node));
    if (ptr == NULL)
        return 1;
    return 0;
}
// Push operation
node* push(int data){
    if(isfull()){
        printf("\nStack Overflow!!\n");
    }
    else{
        node* ptr=(node*)malloc(sizeof(node));
        ptr->data=data;
        ptr->next=top;
        top=ptr;
        return top;
    }
}
// Pop operation
int pop(){
    if(isempty()){
        printf("\nStack Underflow!!\n");
    }
    else{
        int val=top->data;
        node *p=top;
        top=top->next;
        free(p);
        return val;
    }
}
// Peek function
int peek(int pos){
    node *ptr=top;
    for(int i =1;(i<pos && ptr!=NULL);i++){
        ptr=ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
    }
    else{
        return -1;
    }
}

int main()
{
    push(55);
    push(11);
    push(22);
    for(int i =0; i<=3; i++){
        printf("\nValue at Index %d: %d\n",i,peek(i));
    }

    int ele=pop();
    printf("\nPopped element is %d\n",ele);
    for(int i =0; i<=3; i++){
        printf("\nValue at Index %d: %d\n",i,peek(i));
    }
        
    return 0;
}