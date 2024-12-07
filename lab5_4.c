#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    /**for (int i = 0; i < num; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }**/
    for (int i = 0; i < num; i++)
    {
        int var = (2 * num) - (2 * i) - 1;
        for (int j = 0; j < var / 2; j++)
        {
            printf("  ");
        }
        for (int k = 0; k < 2 * num - var; k++)
        {
            printf("%d ", abs(k - num));
        }
        printf("\n");
    }
    for (int i = num - 2; i >= 0; i--)
    {
        int var = (2 * num) - (2 * i) - 1;
        for (int j = 0; j < var / 2; j++)
        {
            printf("  ");
        }
        for (int k = 0; k < 2 * num - var; k++)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
}