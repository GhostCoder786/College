#include <stdio.h>


void inputMatrix(int matrix[][10], int rows, int cols) {
    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void addMatrix(int firstMatrix[][10], int secondMatrix[][10], int resultMatrix[][10], int r1, int c1, int r2, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            resultMatrix[i][j] = firstMatrix[i][j]+secondMatrix[i][j];
        }
    }
}

void printMatrix(int matrix[][10], int rows, int cols) {
    printf("Matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int r1,c1,r2,c2;
    printf("Enter the number of rows and columns for the first matrix: "); 
    scanf("%d %d", &r1, &c1); 
    printf("%d,%d\n",r1,c1);

    int firstMatrix[10][10]; 
    inputMatrix(firstMatrix, r1, c1); 
    printf("Enter the number of rows and columns for the second matrix: "); 
    scanf("%d %d", &r2, &c2);
    printf("%d,%d\n",r2,c2);
    
    if(r1!=r2 && c1!=c2){
        printf("Matrix Addition is not possible!");
        return -1;
    }
    int secondMatrix[10][10];
    inputMatrix(secondMatrix, r2, c2); 
    printf("%d,%d,%d,%d",r1,c1,r2,c2); 
    int resultMatrix[10][10]; 
    addMatrix(firstMatrix, secondMatrix, resultMatrix, r1, c1, r2, c2); 
    

    printf("Resultant Matrix:\n");
    printMatrix(resultMatrix, r1, c2); 
    return 0;
}
