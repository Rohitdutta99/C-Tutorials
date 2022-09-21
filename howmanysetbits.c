// bit masking
// how many set bits or 1 are there in "N"
#include<stdio.h>
#include<stdlib.h>
int numSetBits(unsigned int A) {
    int c=0;
    while(A!=0)
    {
        A=A&(A-1);
        c++;
    }
    return c;
}
int main()
{
    int n;
    printf("\nEnter tan integer: ");
    scanf("%d",&n);
    printf("\nNumber of set bits: %d",numSetBits(n));
    return 0;
}