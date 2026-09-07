// Q57: Find the sum of array elements.

#include <stdio.h>
int main() {
    int n, i, sum = 0;
    int arr[100];

    // Read the number of elements
    printf("enter a number of element: ") ;
    scanf("%d", &n);

    // Read array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of array elements
    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    // Print the sum
    printf("%d", sum);

    return 0;
}