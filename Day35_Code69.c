// Q69: Find the second largest element in an array.

#include <stdio.h>
int main() {
    int n, i;
    int largest, secondLargest;

    // Read the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Read the array elements
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and second largest
    if (arr[0] > arr[1]) {
        largest = arr[0];
        secondLargest = arr[1];
    } else {
        largest = arr[1];
        secondLargest = arr[0];
    }

    // Find the largest and second largest elements
    for (i = 2; i < n; i++) {

        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    // Print the second largest element
    printf("Second largest element = %d", secondLargest);

    return 0;
}