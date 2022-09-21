#include<stdio.h>
int linearsearch(int arr[],int size,int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element)
        return i;
    }
    return -1;
}
int binarysearch(int arr[],int size,int element){
    int low=0,mid,high=size-1;
    //start search
    while(low<=high){
        mid = (low + high) /2;
        if(arr[mid]==element)
        return mid;
        if(arr[mid]<element)
            low=mid+1;
        else
        high=mid-1;
    }
    //searching ends
    return -1;
}
int main(){
    //Unsorted array for linear search
    /*
    int arr[]={1,3,5,7,9,8,54,45,15,48,4};*/
    //Sorted array for binary search
    int arr[]={5,8,9,12,55,65,222,666,777,888,999};
    int size=sizeof(arr)/sizeof(int); //this way you can find out the size of any integer/char/float array
    int element=888;
    int searchindex=binarysearch(arr,size,element);
    printf("\nThe %d element was found in %d index\n",element,searchindex);
    return 0;
}