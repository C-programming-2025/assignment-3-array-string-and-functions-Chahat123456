// Write a function named reverseArray that takes an array of integers as input and reverses the order of the elements in the array.
#include <stdio.h>

void reverseArray(int arr[], int n)
{
    int i = 0, j = n - 1, t;
    while (i < j)
    {
        t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
        i++;
        j--;
    }
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

    reverseArray(arr, n);

    printf("Reversed array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
