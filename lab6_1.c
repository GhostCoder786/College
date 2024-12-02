#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the values: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Unsorted-Array: "); 
    for(int j=0;j<size;j++){
        printf("%d ",arr[j]);
    }
    printf("\n"); 
    printf("Sorted-Array: ");
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int j=0;j<size;j++){
        printf("%d ",arr[j]);
    }
    printf("\n");   
}