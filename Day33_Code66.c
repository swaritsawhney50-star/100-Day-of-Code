// Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>
int main() {
    int n, i, element, pos;

    // Read the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];

    // Read the elements of the sorted array
    printf("Enter the sorted array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the element to insert
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Find the appropriate position
    pos = n;

    for (i = 0; i < n; i++) {
        if (element < arr[i]) {
            pos = i;
            break;
        }
    }

    // Shift elements one position to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
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