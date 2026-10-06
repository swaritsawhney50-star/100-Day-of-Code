// Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

#include <stdio.h>
int main() {
    int n, i, j;

    // Read size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    int answer[n];

    // Read array elements
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Calculate product except self
    for (i = 0; i < n; i++) {

        answer[i] = 1;

        for (j = 0; j < n; j++) {

            // Skip the current element
            if (i != j) {
                answer[i] = answer[i] * nums[j];
            }
        }
    }

    // Print answer array
    printf("[");

    for (i = 0; i < n; i++) {
        printf("%d", answer[i]);

        if (i < n - 1) {
            printf(",");
        }
    }

    printf("]");

    return 0;
}