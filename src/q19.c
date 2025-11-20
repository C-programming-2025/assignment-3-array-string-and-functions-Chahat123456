//  Write a function named calculateFactorialSeries that takes an integer n as input and prints the factorial series up to n.
#include <stdio.h>

void calculateFactorialSeries(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
        printf("%lld ", fact);
    }
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    calculateFactorialSeries(n);
    return 0;
}
