// Circular Queue 
#include<stdio.h>
#include<stdlib.h>
char Q[25];
int F=-1, R=-1,n;
void insert_CirQ()
{
	if( (R==n-1 && F==0)  ||  (R==F-1) )
	 {
	 	printf("\nCircular Queue is Full!");
	 	return;
	 }
	if(F==-1 || R==-1)  // Q empty
	  F=R=0;
	else   // Q not empty
	  R=(R+1)%n;
	printf("Enter one value to insert : ");
	fflush(stdin);
	scanf("%c",&Q[R]);
	printf("%c is inserted succesfuly",Q[R]);
}
void Display_CirQ()
{
	int i;
	if (F==-1 || R==-1)
	 {
	 	printf("\nEmpty Circular Queue!");
	 	return;
	 }
	printf("\nQ Values from Front to Rear : ");
	if (F<=R)
	{
		for(i=F;i<=R;i++) 
		 printf("| %c ",Q[i]);
	}
	else
	{
		for(i=F;i<=n-1;i++)
		 printf("| %c ",Q[i]);
		for(i=0;i<=R;i++)
		 printf("| %c ",Q[i]);
	}
	printf("|");
}
void Delete_CirQ()   // not updated
{
	if(F==-1 || R==-1)
	 {
	 	printf("\nQ is Empty!");
	 	return;
	 }
	printf("\n%c is Deleted !",Q[F]);
	if(F==R) // single value to delete
	 F=R=-1; // Q is now empty
	else 
	 F++; 
}
int main()
{
	int ch;
	printf("Enter Size of Circular Queue : ");
	scanf("%d",&n);
	while(1)
	{
		printf("\n---------------------------\n--Circular Queue Options--\nInsertion : Press 1\nDelete : Press 2\nDisplay : Press 3\nExit : Press 4\nEnter Choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insert_CirQ(); 
					break;
			case 2: Delete_CirQ();
					break;
			case 3: Display_CirQ();
					break;
			case 4: exit(1);
			default: printf("Invalid Option!");
		}
	}
}