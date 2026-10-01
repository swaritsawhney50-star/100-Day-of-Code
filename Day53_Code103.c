//  Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

#include <stdio.h>
int main() {
    int n, i;
    int totalSum = 0;
    int leftSum = 0;
    int rightSum;
    int pivot = -1;

    // Read the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];

    // Read array elements
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);

        // Calculate total sum of array
        totalSum = totalSum + nums[i];
    }

    // Find the pivot index
    for (i = 0; i < n; i++) {

        // Calculate right sum
        rightSum = totalSum - leftSum - nums[i];

        // Check if left sum and right sum are equal
        if (leftSum == rightSum) {
            pivot = i;
            break;
        }

        // Add current element to left sum
        leftSum = leftSum + nums[i];
    }

    // Print the pivot index
    printf("%d", pivot);

    return 0;
}