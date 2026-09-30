// Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

#include <stdio.h>
int main() {
    int n, i, x;
    int low, high, mid;
    int result = -1;

    // Read the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Read the sorted array elements
    printf("Enter the sorted array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the value of x
    printf("Enter x: ");
    scanf("%d", &x);

    // Initialize binary search limits
    low = 0;
    high = n - 1;

    // Binary search for ceil of x
    while (low <= high) {

        mid = (low + high) / 2;

        // If arr[mid] is greater than or equal to x,
        // it can be the answer
        if (arr[mid] >= x) {
            result = mid;

            // Search on left side for first occurrence
            high = mid - 1;
        }
        else {
            // Ceil must be on the right side
            low = mid + 1;
        }
    }

    // Print the index of ceil
    printf("%d", result);

    return 0;
}
