#include <stdio.h>

void InsertString(char mainString[], char subString[], int index)
{
    int mainLength = 0, subLength = 0;

    // Calculate lengths of the main string and substring
    while (mainString[mainLength] != '\0')
    {
        mainLength++;
    }
    while (subString[subLength] != '\0')
    {
        subLength++;
    }

    // Shift characters in mainString to make space for subString
    for (int i = mainLength; i >= index; i--)
    {
        mainString[i + subLength] = mainString[i];
    }

    // Insert subString into mainString
    for (int i = 0; i < subLength; i++)
    {
        mainString[index + i] = subString[i];
    }
}

int main()
{
    printf("Created By ARYAN KHANNA AR-B1\n\n");
    char mainString[200], subString[100];
    int index;

    printf("Enter the main string: ");
    fgets(mainString, sizeof(mainString), stdin);
    for (int i = 0; mainString[i] != '\0'; i++)
    {
        if (mainString[i] == '\n')
        {
            mainString[i] = '\0';
            break;
        }
    }

    printf("Enter the sub string: ");
    fgets(subString, sizeof(subString), stdin);
    for (int i = 0; subString[i] != '\0'; i++)
    {
        if (subString[i] == '\n')
        {
            subString[i] = '\0';
            break;
        }
    }

    printf("Enter the index: ");
    scanf("%d", &index);

    InsertString(mainString, subString, index);

    printf("Final String is: %s\n", mainString);
    return 0;
}
