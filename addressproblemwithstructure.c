// Problem Address store in Structure
#include<stdio.h>
typedef struct address{
    int houseNo;
    int block;
    char city[100];
    char state[100];
}add;
void printadd(add adds);
int main()
{
    add address[5];
    for( int i=0;i<5;i++)
    {
        printf("Enter details of Person %d\n",i+1);
        printf("\nEnter house No: ");
        scanf("%d",&address[i].houseNo);
        printf("\nEnter Block No: ");
        scanf("%d",&address[i].block);
        printf("\nEnter City: ");
        scanf("%s",address[i].city);
        printf("\nEnter State: ");
        scanf("%s",address[i].state);
        fflush(stdin);
    }
    for(int i=0;i<5;i++)
    {
        printadd(address[i]);
    }
    
}

void printadd(add adds)
{
    printf("Address is: %d, %d, %s, %s\n", adds.houseNo,adds.block,adds.city,adds.state);
}