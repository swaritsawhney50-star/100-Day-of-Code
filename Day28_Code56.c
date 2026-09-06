// Q56: Read and print elements of a one-dimensional array.

#include <stdio.h>
int main() {
    int n, i;
    int arr[100];

    // Read the size of the array
    printf("enter the number of elements: ") ;
    scanf("%d", &n);

    // Read array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print array elements
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}