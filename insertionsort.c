// Insertion Sort
#include <stdio.h>
#include <stdlib.h>

void insertionsort(int *arr, int n)
{
    int key;
    for (int i = 1; i <= n-1; i++)
    {
        key = arr[i];
        // Insert A[j] into the sorted sequence A[1.. j-1].
        int j = i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
            arr[j+1]=key;
        }
    }
}

void display(int *arr, int n)
{
    printf("\n---------------------------------");
    for (int i = 0; i < n; i++)
    {
        printf("\nElement %d: %d", i + 1, arr[i]);
    }
    printf("\n---------------------------------");
}

int main()
{
    int *arr, n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    insertionsort(arr,n);
    display(arr,n);
    
    return 0;
}