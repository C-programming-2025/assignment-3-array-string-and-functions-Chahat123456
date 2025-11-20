// Write a function named calculatePower that takes two integers, base and exponent, as input and returns the result of raising the base to the exponent.
#include <stdio.h>

long long calculatePower(int base, int exp)
{
    long long result = 1;
    for (int i = 0; i < exp; i++)
        result *= base;
    return result;
}

int main()
{
    int b, e;
    printf("Enter base and exponent: ");
    scanf("%d %d", &b, &e);

    printf("Result = %lld", calculatePower(b, e));
    return 0;
}
