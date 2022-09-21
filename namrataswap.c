// swqapping using function
// call by value
#include<stdio.h>
void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
int main()
{
	int a, b;
	printf("Enter two numbers for a and b: ");
	scanf("%d %d",&a,&b);
	printf("Original values\na=%d  , b=%d",a,b);
	swap(&a,&b);  // function call by reference
	printf("\n\nAfter interchaging values\na=%d  , b=%d",a,b);
}