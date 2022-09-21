#include <stdio.h>

int main(){
    
    int arr[10], n=10;
    
    for (int i = 0; i < n; i++) {
        printf("\nEnter Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n\n<------Before Reverse------>\n\n");
    for (int i = 0; i < n; i++){
        if(i<n-1)
            printf("| %d ",arr[i]);
        else
            printf("| %d |",arr[i]);
    }
        
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
            arr[j] = arr[j]^arr[j+1];
            arr[j+1] = arr[j]^arr[j+1];
            arr[j] = arr[j]^arr[j+1];
        }
    }
    
    printf("\n\n<------After Reverse------>\n\n");
    for (int i = 0; i < n; i++) {
        if(i<n-1)
            printf("| %d ",arr[i]);
        else
            printf("| %d |",arr[i]);
    }
        
    
    return 0;
}
