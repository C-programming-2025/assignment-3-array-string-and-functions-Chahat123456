// Write a function named countOccurrences that takes a string and a character as input and returns the number of times the character appears in the string.
#include <stdio.h>

int countOccurrences(char str[], char ch)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == ch)
            count++;
    return count;
}

int main()
{
    char str[100], ch;
    printf("Enter string: ");
    gets(str);

    printf("Enter character: ");
    scanf("%c", &ch);

    printf("Occurrences = %d", countOccurrences(str, ch));
    return 0;
}
