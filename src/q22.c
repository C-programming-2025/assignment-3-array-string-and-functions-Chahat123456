// Write a recursive function named calculateFibonacci that takes an integer n as input and returns the nth Fibonacci number. The Fibonacci sequence starts with 0 and 1, and each subsequent number is the sum of the two preceding numbers.
#include <stdio.h>

int calculateFibonacci(int n)
{
    if (n <= 1)
        return n;
    return calculateFibonacci(n - 1) + calculateFibonacci(n - 2);
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Fibonacci(%d) = %d", n, calculateFibonacci(n));
    return 0;
}
