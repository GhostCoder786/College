#include <stdio.h>


void inputArray(int *arr,int size){
    printf("Enter the array: ");
    for(int i=0;i<size;i++){
        if(i<size-1){
            scanf("%d,",&arr[i]);
        }
        else{
            scanf("%d",&arr[i]);
        }
    }
}

void bubbleSort(int *arr,int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int *arr,int size){
    for(int i=0;i<size;i++){
        if(i<size-1){
            printf("%d,",arr[i]);
        }
        else{
            printf("%d",arr[i]);
        }
    }
}

void main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);

    int arr[size];
    inputArray(arr,size);
    printf("\nUnsorted-Array: ");
    printArray(arr,size);
    bubbleSort(arr,size);
    printf("\nSorted-Array; ");
    printArray(arr,size);
    printf("\n");

}