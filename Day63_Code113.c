// Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.


#include <stdio.h>

int main() {
    int n, i, j, k, temp;

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
    if (k < 1 || k > n) {
        printf("Invalid k");
        return 0;
    }

    // Sort array in ascending order
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print kth smallest element
    printf("%d", arr[k - 1]);

    return 0;
}