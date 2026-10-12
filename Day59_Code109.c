// Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>

int main() {
    int n, k, i, j;
    int sum, maxSum;

    // Read the size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the value of k
    printf("Enter k: ");
    scanf("%d", &k);

    // Check if k is valid
    if (k <= 0 || k > n) {
        printf("Invalid k");
        return 0;
    }

    // Initialize maximum sum
    maxSum = 0;

    for (i = 0; i < k; i++) {
        maxSum = maxSum + arr[i];
    }

    // Find maximum sum of subarrays of size k
    for (i = 0; i <= n - k; i++) {

        sum = 0;

        for (j = i; j < i + k; j++) {
            sum = sum + arr[j];
        }

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    // Print maximum sum
    printf("%d", maxSum);

    return 0;
}