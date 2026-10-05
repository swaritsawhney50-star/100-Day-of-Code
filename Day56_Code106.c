// Q106: Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.
/*
N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.
*/

#include <stdio.h>

int main() {
    int n, i, j;
    int nextGreater;

    // Read the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find next greater element for each element
    for (i = 0; i < n; i++) {

        // Initially assume no greater element exists
        nextGreater = -1;

        // Search elements on the right
        for (j = i + 1; j < n; j++) {

            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;
            }
        }

        // Print result in comma-separated format
        printf("%d", nextGreater);

        if (i < n - 1) {
            printf(", ");
        }
    }

    return 0;
}