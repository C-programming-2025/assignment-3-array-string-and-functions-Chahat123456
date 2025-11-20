// Implement a C program to reverse a string.
#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);

    int i = 0;
    while (str[i] != '\0')
        i++;

    printf("Reversed: ");
    for (i = i - 1; i >= 0; i--)
        printf("%c", str[i]);

    return 0;
}
