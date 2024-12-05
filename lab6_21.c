#include <stdio.h>

#define MAX 500

void inputMatrix(int matrix[][MAX], int rows, int columns)
{
    printf("Enter elements of the matrix {%d x %d}:\n", rows, columns);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Element[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void addMatrix(int firstMatrix[][MAX], int secondMatrix[][MAX], int resultMatrix[][MAX], int r1, int c1, int r2, int c2)
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            resultMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
        }
    }
}

void printMatrix(int matrix[][MAX], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int r1, c1, r2, c2;

    printf("Enter the rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("%d,%d\n", r1, c1);

    int firstMatrix[r1][c1];
    inputMatrix(firstMatrix, r1, c1);

    printf("Enter the rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);
    printf("%d,%d\n", r2, c2);

    int secondMatrix[r2][c2];
    inputMatrix(secondMatrix, r2, c2);
    printf("%d,%d,%d,%d", r1, c1, r2, c2);

    if ((r1 != r2 || c1 != c2))
    {
        printf("Both the matrices need to be equal for the addition!\n");
        return -1;
    }

    int resultMatrix[r1][r2];
    addMatrix(firstMatrix, secondMatrix, resultMatrix, r1, c1, r2, c2);

    printf("\nThe result matrix:\n");
    printMatrix(resultMatrix, r1, c1);
    printf("\n");
    return 0;
}