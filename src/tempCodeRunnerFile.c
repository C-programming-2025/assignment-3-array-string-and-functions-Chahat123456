//  Write a recursive function named countOccurrences that takes a string and a character as input and returns the number of times the character appears in the string.
#include <stdio.h>

int countOccurrences(char str[], char ch, int i)
{
    if (str[i] == '\0')
        return 0;
    return (str[i] == ch) + countOccurrences(str, ch, i + 1);
}

int main()
{
    char str[100], ch;
    printf("Enter string: ");
    gets(str);

    printf("Enter character: ");
    scanf("%c", &ch);

    printf("Occurrences = %d", countOccurrences(str, ch, 0));
    return 0;
}
