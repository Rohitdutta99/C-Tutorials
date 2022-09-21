// Prog 3
#include<stdio.h>
#include<stdlib.h>
int Indexdeletion(int arr[], int size, int index){

    if(index >= size){
        printf("\n\nIndex exceeded the size!!\a");
        return -1;
    }
    for (int i = index; i <= size-1; i++)
    {
        arr[i] = arr[i+1];
        
    }
    return 1;
}

void display(int arr[], int size){
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        if(i<size-1)
        printf("| %d ",arr[i]);
        else
        printf("| %d |",arr[i]);
    }
}
int main()
{
    int *arr, n, index,c=0;
    char ch = 'y';
    printf("\nEnter the size of the array: ");
    scanf("%d",&n);
    arr =(int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("\nEnter Element %d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n\n<------Before Deletion------>\n\n");
    display(arr,n);

    while(ch == 'y'){
        printf("\n\nEnter Index to delete: ");
        scanf("%d",&index);
        
        c = Indexdeletion(arr,n,index);
        
        if(c!=-1){
            printf("\n\n<------After Deletion------>\n\n");
            display(arr,--n);
        }
        if(n<=0){
        printf("\n\nSorry you can't delete further, the Array is Empty!!\n\n");
        exit(0);
        }
        printf("\n\nDo you want to delete again(y/n): ");
        fflush(stdin);
        scanf("%c",&ch); 
    }  
    return 0;
}