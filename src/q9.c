// Implement a C program to count the occurrence of a specific character in a string.
#include <stdio.h>

int main()
{
    char str[100], ch;
    printf("Enter string: ");
    gets(str);

    printf("Enter character: ");
    scanf("%c", &ch);

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == ch)
            count++;

    printf("Occurrences = %d", count);
    return 0;
}
