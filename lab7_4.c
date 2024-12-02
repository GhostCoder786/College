#include <stdio.h>

int length(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int GetSubStringIndex(char *string, char *substring)
{
    int found;
    int str_len = length(string);
    int substr_len = length(substring);

    for (int i = 0; i <= str_len - substr_len; i++)
    {
        found = 1;
        for (int j = 0; j < substr_len; j++)
        {
            if (string[i + j] != substring[j])
            {
                found = 0;
                break;
            }
        }
        if (found)
        {
            return i;
        }
    }
    return 1;
}

int main()
{
    printf("Created By ARYAN KHANNA AR-B1\n\n");
    char string[100];
    char substring[100];

    printf("Enter the main string: ");
    gets(string);
    printf("Enter the sub-string: ");
    gets(substring);

    printf("The position of sub-string in string is: %d\n", GetSubStringIndex(string, substring));

    return 0;
}