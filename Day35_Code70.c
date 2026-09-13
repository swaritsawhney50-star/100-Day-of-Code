// Q70: Rotate an array to the right by k positions.

#include <stdio.h>
int main() {
    int n, i, k;

    // Read the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Read the array elements
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the number of positions to rotate
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);

    // Handle k greater than array size
    k = k % n;

    // Rotate the array k times
    while (k > 0) {
        int last = arr[n - 1];

        // Shift all elements one position to the right
        for (i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }

        // Move the last element to the first position
        arr[0] = last;

        k--;
    }

    // Print the rotated array
    printf("Array after rotation: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}