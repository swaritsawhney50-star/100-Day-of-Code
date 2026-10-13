// Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

#include <stdio.h>

int main() {
    int n, k, i, j;
    int firstNegative;

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

    // Read the value of k
    printf("Enter k: ");
    scanf("%d", &k);

    // Check if k is valid
    if (k <= 0 || k > n) {
        printf("Invalid k");
        return 0;
    }

    // Find first negative in each subarray
    for (i = 0; i <= n - k; i++) {

        // Assume no negative number exists
        firstNegative = 0;

        // Check elements of current subarray
        for (j = i; j < i + k; j++) {

            if (arr[j] < 0) {
                firstNegative = arr[j];
                break;
            }
        }

        // Print the result
        printf("%d", firstNegative);

        if (i < n - k) {
            printf(" ");
        }
    }

    return 0;
}