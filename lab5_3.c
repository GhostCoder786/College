#include <stdio.h>

int smallestNumber(int arr[], int size)
{
    int k = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < k)
        {
            k = arr[i];
        }
    }
    return k;
}

int largestNumber(int arr[], int size)
{
    int k = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > k)
        {
            k = arr[i];
        }
    }
    return k;
}

int main()
{
    printf("Created By ARYAN KHANNA AR-B1\n\n");
    int size;
    printf("Enter the size of the list: ");
    scanf("%d", &size);
    printf("Enter the list: ");
    int arr[size];
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

    printf("\nSmallest Numer in the list is: %d\n ", smallestNumber(arr, size));
    printf("Largest Number in the list is: %d\n", largestNumber(arr, size));

    return 0;
}