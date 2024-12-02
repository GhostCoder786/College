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

int Palindrome(char string[], int i)
{
    int j = i / 2;
    for (int k = 0; k < j; k++)
    {
        if (string[k] != string[i - k - 1])
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