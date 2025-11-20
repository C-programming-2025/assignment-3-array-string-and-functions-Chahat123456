// Write a recursive function named calculateFactorial that takes an integer n as input and returns its factorial.
#include <stdio.h>

long long calculateFactorial(int n)
{
    if (n == 0)
        return 1;
    return n * calculateFactorial(n - 1);
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("Factorial = %lld", calculateFactorial(n));
    return 0;
}
