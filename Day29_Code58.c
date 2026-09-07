// Q58: Find the maximum and minimum element in an array.

#include <stdio.h>
int main() {
    int n, i;
    int arr[100];
    int max, min;

    // Read the number of elements
    printf("enter a number: ");
    scanf("%d", &n);

    // Read array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume first element is maximum and minimum
    max = arr[0];
    min = arr[0];

    // Find maximum and minimum
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Print maximum and minimum
    printf("Max=%d, Min=%d", max, min);

    return 0;
}