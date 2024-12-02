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

void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int resultMatrix[][10], int r1, int c1, int r2, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
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

int main() {
    int r1, c1, r2, c2;

    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    int firstMatrix[10][10];
    inputMatrix(firstMatrix, r1, c1);

    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication is not possible. Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return -1;
    }

    int secondMatrix[10][10];
    inputMatrix(secondMatrix, r2, c2);

    int resultMatrix[10][10];
    multiplyMatrices(firstMatrix, secondMatrix, resultMatrix, r1, c1, r2, c2);

    printf("Resultant matrix:\n");
    printMatrix(resultMatrix, r1, c2);

    return 0;
}
