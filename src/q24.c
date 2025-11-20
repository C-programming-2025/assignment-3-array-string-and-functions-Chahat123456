// Write a recursive function named calculatePower that takes two integers base and exponent as input and returns the result of raising the base to the exponent.
#include <stdio.h>

long long calculatePower(int base, int exp)
{
    if (exp == 0)
        return 1;
    return base * calculatePower(base, exp - 1);
}

int main()
{
    int b, e;
    printf("Enter base & exponent: ");
    scanf("%d %d", &b, &e);

    printf("Result = %lld", calculatePower(b, e));
    return 0;
}
