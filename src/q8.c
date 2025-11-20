// Write a C program to check if a given string is a palindrome.
#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);

    int i = 0, j;
    while (str[i] != '\0')
        i++;
    j = i - 1;

    int flag = 1;
    for (i = 0; i < j; i++, j--)
        if (str[i] != str[j])
            flag = 0;

    if (flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
