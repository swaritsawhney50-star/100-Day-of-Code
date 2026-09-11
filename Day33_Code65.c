// Q65: Search in a sorted array using binary search.

#include <stdio.h>
int main() {
    int n, i, key;
    int low, high, mid;
    int index = -1;

    // Read the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Read the elements of the sorted array
    printf("Enter the sorted array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Initialize low and high
    low = 0;
    high = n - 1;

    // Perform binary search
    while (low <= high) {

        // Find the middle index
        mid = (low + high) / 2;

        // Check if the key is at the middle
        if (arr[mid] == key) {
            index = mid;
            break;
        }

        // If key is greater, search the right half
        else if (key > arr[mid]) {
            low = mid + 1;
        }

        // If key is smaller, search the left half
        else {
            high = mid - 1;
        }
    }

    // Print the result
    if (index != -1) {
        printf("Found at index %d", index);
    } else {
        printf("-1");
    }

    return 0;
}