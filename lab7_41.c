#include <stdio.h>

int main()
{
    printf("Created By ARYAN KHANNA\n\n");
    char string[100], substring[100];
    printf("Enter the main string: ");
    gets(string);
    printf("Enter thesub string: ");
    gets(substring);
    int i, j;
    int index = -1;
    for (i = 0; string[i] != '\0'; i++)
    {
        for (j = 0; substring[j] != '\0'; j++)
        {
            if (string[i + j] != substring[j])
            {
                break;
            }
        }
        if (substring[j] == '\0')
        {
            index = i + 1;
        }
    }
    printf("Index-Position: %d\n", index);
    return 0;
}