// Write a C program to find the length of a string without using the built-in string functions.
#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);

    int i = 0;
    while (str[i] != '\0')
        i++;

    printf("Length = %d", i);
    return 0;
}
