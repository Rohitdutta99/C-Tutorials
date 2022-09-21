/*
5

4 7 6 2 1
1 4 8 6 2
9 8 7 2 3
6 7 3 9 4
2 9 3 5 7
*/
#include<stdio.h>
int main()
{
	int n,max=0,max1=0,max2=0,temp=-1,t=-1;
	scanf("%d",&n);
    int a[n][n];
	for(int i=0;i<n;i++)
	{
        int c=0;
		for(int j=0;j<n;j++,c++)
        {
        scanf("%d",&a[i][j]);
		if(a[i][j]>max)
            temp=max;
            max=a[i][j];
        }
        if(max1<max || c==0)
        {
            t=max1;
            max1=temp;
        }
        if(max2<max1||c==1)
            max2=t;
        
	}
	printf("\n %d",max1);
}