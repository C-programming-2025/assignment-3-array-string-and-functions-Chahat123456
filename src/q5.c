// Write a C program to merge two sorted arrays into a single sorted array.
#include <stdio.h>

int main()
{
    int n1, n2, i = 0, j = 0, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter sorted elements:\n");
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int b[n2];
    printf("Enter sorted elements:\n");
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    int merged[n1 + n2];

    i = j = 0;
    while (i < n1 && j < n2)
        merged[k++] = (a[i] < b[j]) ? a[i++] : b[j++];

    while (i < n1)
        merged[k++] = a[i++];
    while (j < n2)
        merged[k++] = b[j++];

    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++)
        printf("%d ", merged[i]);

    return 0;
}
