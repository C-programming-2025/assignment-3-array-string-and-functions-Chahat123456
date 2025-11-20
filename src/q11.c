// Write a function named calculateAverage that takes an array of integers as input and returns the average of the numbers.
#include <stdio.h>

float calculateAverage(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return (float)sum / n;
}

int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Average = %.2f", calculateAverage(arr, n));
    return 0;
}
