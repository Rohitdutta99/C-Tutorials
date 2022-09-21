#include<stdio.h>
#include<stdlib.h>
int f=-1,r=-1,n;
char *cirQ;
void insertfunc()
{
        
    if((f==0&&r==n-1)||(r==f-1))
    {
        printf("\nFull");
        return;
    }
    if(f==-1)
        r=f=0;
    else
        r=(r+1)%n;
    printf("Enter element: ");
    fflush(stdin);
    scanf("%c",&cirQ[r]);
    printf("\nInsertion Successful");

}
void deletecirQ()
{
    if(f==-1)
    {
        printf("\nEmpty");
        return;
    }
    if(f==r)
    {
        f=r=-1;
        printf("\nDeleted");
    }
}
void displayfunc()
{
    int flag=1,i;
    if(f==-1)
        printf("Empty Circular Queue!!\a");
    else
    {
        if(f<=r)
        {
            for(i=f;i<=r;i++)
                printf(" %c ",cirQ[i]);
        }
        else
        {/*
            for(int i=f;i<n;i++)
                printf(" %c ",cirQ[i]);
            for(int i=0;i<=r;i++)
                printf(" %c ",cirQ[i]);*/
            for(i=f; (i-1)!=r||flag==1; i=(i+1)%n)
            {
                flag=0;
                printf(" %c ",cirQ[i]);
            }
            
        }
        
    }
}
int main()
{
    
    char choice;
    printf("What is the size of the circular Queue: ");
    scanf("%d",&n);
    cirQ=(char*)malloc(sizeof(char)*n);
    while(1)
    {
        printf("\n\n---Circular Queue Options---\n\n");
        printf("Insert: PRESS 1\nDelete: PRESS 2\nDisplay: PRESS 3\nExit: PRESS 4\n");
        printf("Enter your choice: ");
        fflush(stdin);
        scanf("%c",&choice);
        switch(choice)
        {
            case '1': insertfunc();
                        break;
            case '2': deletecirQ();
            case '3': displayfunc();
                        break;
            case '4': exit(0);
            default: printf("\nINVALID INPUT!!");
        }

    }
    
    
}