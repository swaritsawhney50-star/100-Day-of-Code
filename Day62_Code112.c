// Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include <stdio.h>

int main() {
    int n, i;
    int currentSum, maxSum;

    // Read the size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid size");
        return 0;
    }

    int arr[n];

    // Read array elements
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize sums with first element
    currentSum = arr[0];
    maxSum = arr[0];

    // Apply Kadane's Algorithm
    for (i = 1; i < n; i++) {

        // Find maximum between current element
        // and previous sum + current element
        if (arr[i] > currentSum + arr[i]) {
            currentSum = arr[i];
        }
        else {
            currentSum = currentSum + arr[i];
        }

        // Update maximum sum
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    // Print maximum subarray sum
    printf("%d", maxSum);

    return 0;
}