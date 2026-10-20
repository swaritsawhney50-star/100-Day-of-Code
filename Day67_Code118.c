// Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>

int main() {
    int n, i;
    int sum = 0, total, missing;

    // Read the size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum of array elements
    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    // Calculate expected sum from 0 to n
    total = n * (n + 1) / 2;

    // Find missing number
    missing = total - sum;

    // Print missing number
    printf("%d", missing);

    return 0;
}
