//Binary Trees linked representation
#include<stdio.h>
#include<stdlib.h>
typedef struct list{
    int data;
    struct list *left;
    struct list *right;
}node;

node *root = NULL;

void insertnode(int val)
{
    if(root==NULL)
    {
        node *ptr=(node*)malloc(sizeof(node));
        ptr->data=val;
        ptr->left=NULL;
        ptr->right=NULL;
        return;
    }

    node *p = root;

    while (p->left!=NULL||p->right!=NULL)
    {
        if(val<p->data)
        {
            p=p->left;
        }
        else{
            p=p->right;
        }
    }

    if(p->left==NULL)
    {
        node *ptr=(node*)malloc(sizeof(node));
        ptr->data=val;
        ptr->left=NULL;
        ptr->right=NULL;
        p->left=ptr;
        return;
    }

    if (p->right==NULL)
    {
        node *ptr=(node*)malloc(sizeof(node));
        ptr->data=val;
        ptr->left=NULL;
        ptr->right=NULL;
        p->right=ptr;
        return;
    }
    
}


int main()
{
    int val, n, item, s;
    char ch = 'y';

    while (ch == 'y')
    {
        printf("\n\nInsert: PRESS 1\nInsert at End: PRESS 2\nInsert after a particular position: PRESS 3\nDisplay: PRESS 4\nSearch an element: PRESS 5\nDetete at Beginning: PRESS 6\nDelete at End: PRESS 7\nDelete at any particular position: PRESS 8\nCount of how many nodes: PRESS 9\nExit: PRESS 10\n\nEnter your choice: ");
        scanf("%d", &n);
        switch(n)
        {
        case 1:
            printf("\n<---------Insert--------->\n");
            printf("\nEnter value to insert: ");
            scanf("%d", &val);
            insertnode(val);
            display();
            break;
        case 2:
            printf("\n<---------Insert at End--------->\n");
            printf("\nEnter value to insert: ");
            scanf("%d", &val);
            insertatend(val);
            display();
            break;
        case 3:
            printf("\n<---------Insert at any position--------->\n");
            insertatpos();
            break;
        case 4:
            printf("\n<---------Elements of Linked List--------->\n");
            display();
            printf("\n<----------------------------------------->\n");
            break;
        case 5:
            printf("\n<---------search element in linked list--------->\n");
            printf("\nEnter element to search: ");
            scanf("%d",&s);
            if(search(s)!=-1)
                printf("\nElement %d is found at %dth node!\n",s,search(s));
            else
                printf("\nElement %d is not in the linked list!\n",s);
            break;
        case 6:
            printf("\n<---------Delete at Beginning--------->\n\n");
            deleteatstart();
            break;
        case 7:
            printf("\n<---------Delete at End--------->\n\n");
            deleteatend();
            break;
        case 8:
            printf("\n<---------Delete at any particular position--------->\n\n");
            deleteatindex();
            break;
        case 9:
            printf("\n<---------Number of Nodes--------->\n\n");
            printf("\nTotal number of nodes: %d",nodescount());
            break;
        case 10:
            printf("\nThank You!");
            ch='n';
            break;
        default:
            printf("\nInvalid Option!!\n");
            break;
        }
    }
    return 0;
}