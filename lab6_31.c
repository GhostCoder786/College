#include <stdio.h>

void inputMatrix(int matrix[][10],int rows, int cols){
    printf("Enter the elements of %dx%d matrix: \n",rows,cols);
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("Element[%d][%d] = ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
}

void multiplyMatrix(int firstMarix[][10],int secondMatrix[][10],int resultMatrix[][10],int r1,int c1,int r2,int c2){
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            resultMatrix[i][j] = 0;
            for(int k=0;k<c1;k++){
                resultMatrix[i][j] += firstMarix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void printMatrix(int matrix[][10],int rows,int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}

int main(){
    printf("Created By ARYAN KHANNA AR-B1\n\n");

    int r1,c1,r2,c2;
    printf("Enter the rows and columns for first matrix: ");
    scanf("%d,%d",&r1,&c1);

    int firstMatrix[10][10];
    inputMatrix(firstMatrix,r1,c1);

    printf("\nEnter the rows and columns for second matrix: ");
    scanf("%d,%d",&r2,&c2);
    
    if(c1!=r2){
        printf("Matrix Multiplication is not possible!");
        return -1;
    }
    
    int secondMatrix[10][10];
    inputMatrix(secondMatrix,r2,c2);    

    int resultMatrix[10][10];
    multiplyMatrix(firstMatrix,secondMatrix,resultMatrix,r1,c1,r2,c2);

    printf("\nThe Result Matrix: \n");
    printMatrix(resultMatrix,r1,c2);
    printf("\n");

}