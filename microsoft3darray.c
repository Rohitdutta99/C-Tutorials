#include<stdio.h>
int main()
{
    int arr[10][10],r=0,item,c=0,flag=0,temp;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter number (%d): ",j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n\n");
    printf("Enter the item to search: ");
    scanf("%d",&item);

    for(int i=0;i<r;i++)
    {
        temp=i;
        for(int j=0;j<c;j++)
        {
            if(item==arr[i][c]){
                flag=1;
                break;
            }
            else if(item<arr[i][c]){
                for(int k=c;k>0;k--){
                    if(item==arr[i][c])
                    {
                        flag=1;
                        break;
                    }
                }
            }
            if(item>arr[i][c]){
                i+=1;
                if(item==arr[i][c])
                {
                    flag=1;
                    break;
                }
                if(item>arr[i][c]){
                    i++;
                    if(item==arr[i][c])
                    {
                        flag=1;
                        break;
                    }
                }
            }
            if(flag!=0)
            i=temp;

        }
        if(flag==1)
        break;
    }
    if(flag==1)
    printf("Yes %d is in this matrix",item);
}