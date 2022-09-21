// binary search
#include <stdio.h>
#include <stdlib.h>

int binarysearch(int arr[], int size, int ele)
{
    int low, mid, high;
    low = 0;
    high = size - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == ele)
            return mid;
        if (arr[mid] > ele)
        {
            high = mid - 1;
        }
        else{
            low = mid + 1;
        } 
    }
    return -1;
}
int main()
{
    int arr[] = {1, 5, 65, 89, 95, 120, 150};
    int size = 7, ele, searchindex;
    printf("Enter element to search: ");
    scanf("%d", &ele);
    searchindex = binarysearch(arr, size, ele);
    if(searchindex == -1){
    printf("\n%d is not in this array.\nPlease try saerching some other number",ele);
    }
    else{
    printf("\n%d is found on index %d", ele, searchindex);
    }

    return 0;
}