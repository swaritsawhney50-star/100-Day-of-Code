// Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.
/*
N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.
*/

#include <stdio.h>

int main() {
    int n, i, j;
    int previousGreater;

    // Read size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find previous greater element for each element
    for (i = 0; i < n; i++) {

        // Assume no previous greater element exists
        previousGreater = -1;

        // Start from the element immediately on the left
        for (j = i - 1; j >= 0; j--) {

            // Check for greater element
            if (arr[j] > arr[i]) {
                previousGreater = arr[j];
                break;
            }
        }

        // Print answer
        printf("%d", previousGreater);

        // Print comma except after last element
        if (i < n - 1) {
            printf(", ");
        }
    }

    return 0;
}