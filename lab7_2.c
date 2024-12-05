#include <stdio.h>

void InsertString(char mainString[], char subString[], int index)
{
    int i, j = 0;
    for (i = index - 1; mainString[i] != '\0'; i++)
    {
        mainString[i] = subString[j++];
    }
    mainString[i] = '\0';
    printf("%s", mainString);
}
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
    InsertString(string1, string2, index);
    printf("Final String is : %s\n", string1);
    return 0;
}
