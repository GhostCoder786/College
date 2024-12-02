#include <stdio.h>

int main()
{
    printf("Created By ARYAN KHANNA AR-B1\n\n");
    char string[100];
    printf("Enter the string: ");
    gets(string);
    int i = 0;
    while (string[i] != '\0')
    {
        i++;
    }
    printf("%d is the length of the string!\n", i);
    return 0;
}