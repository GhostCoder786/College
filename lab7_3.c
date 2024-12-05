#include <stdio.h>

int length(char string[])
{
    int i = 0;
    while (string[i] != '\0')
    {
        i++;
    }

    return i;
}

int Palindrome(char string[], int len)
{
    char string2[100];
    int i = 0;
    for (int i = 0; i < len; i++)
    {
        string2[i] = string[len - i - 1];
    }
    string2[len] = '\0';
    for (int i = 0; i < len; i++)
    {
        if (string[i] != string2[i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    printf("Created By ARYAN KHANNA AR-B!\n\n");
    char string[100];
    printf("Enter the string: ");
    gets(string);
    if ((Palindrome(string, length(string))) == 1)
    {
        printf("The string is palindrome!\n");
    }
    else
    {
        printf("The string is not palindrome!\n");
    }
}