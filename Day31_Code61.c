// Q61: Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int n, i, key;
    int index = -1;

    // Read the number of elements
    printf("enter the number of element: ") ;
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the element to search
    scanf("%d", &key);

    // Linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;
            break;
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