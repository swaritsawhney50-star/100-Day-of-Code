// Q68: Delete an element from an array.

#include <stdio.h>
int main() {
    int n, i, pos;

    // Read the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Read the array elements
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the index of the element to delete
    printf("Enter the index to delete: ");
    scanf("%d", &pos);

    // Check if the index is valid
    if (pos < 0 || pos >= n) {
        printf("Invalid index");
        return 0;
    }

    // Shift elements one position to the left
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    n--;

    // Print the updated array
    printf("Array after deletion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}