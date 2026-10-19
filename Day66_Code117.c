// Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include <stdio.h>

int main() {
    int m, n, i, j, k;

    // Read size of first array
    printf("Enter size of first array: ");
    scanf("%d", &m);

    int nums1[m];

    // Read elements of first array
    printf("Enter first sorted array: ");
    for (i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    // Read size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n);

    int nums2[n];

    // Read elements of second array
    printf("Enter second sorted array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    int merged[m + n];

    // Initialize indexes
    i = 0;
    j = 0;
    k = 0;

    // Merge both sorted arrays
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            merged[k] = nums1[i];
            i++;
        }
        else {
            merged[k] = nums2[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of first array
    while (i < m) {
        merged[k] = nums1[i];
        i++;
        k++;
    }

    // Copy remaining elements of second array
    while (j < n) {
        merged[k] = nums2[j];
        j++;
        k++;
    }

    // Print merged array
    printf("Merged array: ");
    for (i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}