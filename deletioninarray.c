//Deletion in Array
#include<stdio.h>
#include<stdlib.h>
void display(int arr[], int size){
    printf("\n");
    //Code for Traversal
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
}
//Sorted array insertion
int sortedinsertion(int arr[], int size, int capacity, int ele){
    if(size>=capacity){
        return -1;
    }
    int i=0,count = 0;
    while(arr[i]<=ele){
        arr[i++];
        count++;
    }
    int index = count;
    
    for (int i = size-1; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = ele;
    return 1;
}
//Unsorted array index insertion
int Indexdeletion(int arr[], int size, int capacity, int index){
    //Code for insertion
    if(index >= capacity || index >= size){
        printf("\n\nIndex exceeded the size!!\a");
        return -1;
    }
    for (int i = index; i <= size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    return 1;
}
int main()
{
    int arr[100] = {1, 2, 6, 78};
    int size = 4, ele, capacity = 100, index;
    display(arr, size);
    //printf("\nEnter the element to insert: ");
    //scanf("%d",&ele);
    printf("\nEnter Index to delete: ");
    scanf("%d",&index);
    int ret =Indexdeletion(arr, size, capacity, index);
    
    if(ret != -1)
    size--;
    
    display(arr, size);
    return 0;
}