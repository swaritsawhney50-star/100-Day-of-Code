// Q67: Insert an element in an array at a given position.

#include <stdio.h>
int main() {
    int n, i, pos, element;

    // Read the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];

    // Read the array elements
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the position and element to insert
    printf("Enter the position and element: ");
    scanf("%d %d", &pos, &element);

    // Shift elements one position to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element at the given position
    arr[pos] = element;

    // Increase the size of the array
    n++;

    // Print the updated array
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}