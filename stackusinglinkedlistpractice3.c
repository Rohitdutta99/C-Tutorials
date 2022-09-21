//Stack using linked list practice 3
#include<stdio.h>
#include<stdlib.h>

typedef struct linkedlist
{
    int data;
    struct linkedlist *next;
}node;

node *top = NULL;

int isEmpty(){
    if(top==NULL)
        return 1;
    return 0;
}

int isFull(){
    node *ptr = (node*)malloc(sizeof(node));
    if(ptr == NULL)
        return 1;
    return 0;
}

int stacktop(){
    return top->data;
}

int stackbottom(){
    node *p = top;
    while (p->next != NULL)
    {
        p = p->next;
    }
    return p->data;
}

void push(int val){
    if(isFull())
        printf("\nStack Overflow!!");
    else{
        node *ptr = (node *)malloc(sizeof(node));
        ptr->data = val;
        ptr->next = top;
        top = ptr;
    }
}
int pop(){
    if(isEmpty()){
        printf("\nStack Underflow!!");
    }
    else{
    int val=0;
    node *p = top;
    val = top->data;
    top = p->next;
    free(p);
    return val;
    }
}
void linkedlistTraversal(){
    int i=1;
    node *p = top;
    while(p != NULL){
        printf("\nElement %d: %d",i++,p->data);
        p = p->next;
    }
}

int peek(int pos){
    node *ptr = top;
    for(int i = 0; (i< pos-1 && ptr!=NULL); i++){
        ptr = ptr->next;
    }
    if(ptr!=NULL)
        return ptr->data;
    else
        return -1;
}
int main()
{
    int element;

    push(78);
    push(55);
    push(22);
    linkedlistTraversal();
    element = pop();
    printf("\n-------------------\nPopped element is %d\n-------------------\n",element);
    linkedlistTraversal();
    printf("\nStackTop: %d",stacktop());
    printf("\nStackBottom: %d",stackbottom());
    for (int i = 1; i <= 2; i++)
    {
        printf("\n\nValue at pos %d: %d",i,peek(i));
    }
    
    return 0;
}  