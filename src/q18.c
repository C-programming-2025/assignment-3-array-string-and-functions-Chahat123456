// Write a function named findPrimeNumbers that takes an integer n as input and prints all prime numbers from 1 to n.
#include <stdio.h>

void findPrimeNumbers(int n)
{
    for (int i = 2; i <= n; i++)
    {
        int flag = 1;
        for (int j = 2; j <= i / 2; j++)
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        if (flag)
            printf("%d ", i);
    }
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    findPrimeNumbers(n);
    return 0;
}
