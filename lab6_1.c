#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the values: ");
    for (int i = 0; i < size; i++)
    {
        if (i < size - 1)
        {
            scanf("%d,", &arr[i]);
        }
        else
        {
            scanf("%d", &arr[i]);
        }
    }

    printf("Unsorted-Array: ");
    for (int i = 0; i < size; i++)
    {
        if (i < size - 1)
        {
            printf("%d,", arr[i]);
        }
        else
        {
            printf("%d", arr[i]);
        }
    }
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted-Array: ");
    for (int i = 0; i < size; i++)
    {
        if (i < size - 1)
        {
            printf("%d,", arr[i]);
        }
        else
        {
            printf("%d", arr[i]);
        }
    }
    printf("\n");
}