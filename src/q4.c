// Implement a C program to find the second largest element in an array.
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

    int max = arr[0], second = -999999;

    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            second = max;
            max = arr[i];
        }
        else if (arr[i] > second && arr[i] != max)
        {
            second = arr[i];
        }
    }

    printf("Second largest = %d", second);
    return 0;
}
