#include <stdio.h>

int findSubstringIndex(const char *str, const char *substr)
{
    int i, j, found;
    int str_len = 0, substr_len = 0;

    // Calculate the length of the main string
    while (str[str_len] != '\0')
    {
        str_len++;
    }

    // Calculate the length of the substring
    while (substr[substr_len] != '\0')
    {
        substr_len++;
    }

    // Search for the substring
    for (i = 0; i <= str_len - substr_len; i++)
    {
        found = 1;
        for (j = 0; j < substr_len; j++)
        {
            if (str[i + j] != substr[j])
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
    return -1; // Return -1 if substring is not found
}

int main()
{
    const char *str = "Hello, world!";
    const char *substr = "world";

    int index = findSubstringIndex(str, substr);
    if (index != -1)
    {
        printf("The substring '%s' is found at index %d.\n", substr, index);
    }
    else
    {
        printf("The substring '%s' is not found in the string.\n", substr);
    }

    return 0;
}
