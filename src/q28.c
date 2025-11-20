// Write a recursive function named calculateBinary that takes an integer n as input and returns its binary representation as a string.
#include <stdio.h>

void calculateBinary(int n)
{
    if (n > 1)
        calculateBinary(n / 2);

    printf("%d", n % 2);
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    calculateBinary(n);
    return 0;
}
