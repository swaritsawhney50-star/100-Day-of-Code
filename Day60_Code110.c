// Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.


#include <stdio.h>
int main() {
    int n, k, i, j, max;

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

    // Find maximum in each subarray of size k
    for (i = 0; i <= n - k; i++) {

        // Assume first element of window is maximum
        max = arr[i];

        // Check remaining elements of current window
        for (j = i + 1; j < i + k; j++) {

            if (arr[j] > max) {
                max = arr[j];
            }
        }

        // Print maximum element
        printf("%d", max);

        if (i < n - k) {
            printf(" ");
        }
    }

    return 0;
}