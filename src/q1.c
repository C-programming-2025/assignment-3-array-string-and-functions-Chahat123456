// Write a C program to find the maximum and minimum elements in an array.
#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max = arr[0], min = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Max = %d\nMin = %d", max, min);
    return 0;
}
