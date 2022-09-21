// Bank account structure
#include<stdio.h>
typedef struct BankAccount
{
    int accountno;
    char name[100];
}acc;

int main()
{
    acc acc1={123,"Rohit"},acc2={124,"Gopal"},acc3={125,"Raj"};

    printf("Acc No: %d\n",acc1.accountno);
    printf("Name: %s",acc1.name);
    return 0;
}