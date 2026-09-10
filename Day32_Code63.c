// Q63: Merge two arrays.

#include <stdio.h>
int main() {
    int n1, n2, i;

    // Read the size of first array
    printf("enter the first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    // Read elements of first array
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Read the size of second array
    printf("enter the second array: ");
    scanf("%d", &n2);

    int arr2[n2];

    // Read elements of second array
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Create an array to store merged elements
    int merged[n1 + n2];

    // Copy first array into merged array
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy second array into merged array
    for (i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    // Print the merged array
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}