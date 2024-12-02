#include <stdio.h>

int main()
{
    printf("Created By ARYAN KHANNA AR-B1\n\n");
    char string1[100], string2[100];
    int index;

    printf("Enter the main string: ");
    gets(string1);
    printf("Enter the sub string: ");
    gets(string2);
    printf("Enter the index: ");
    scanf("%d", &index);
    int j = 0;
    for (int i = index - 1; string1[i] != '\0'; i++)
    {
        string1[i] = string2[j++];
    }

    printf("Final String is : %s\n", string1);
    return 0;
}
