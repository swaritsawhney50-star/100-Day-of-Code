// Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

#include <stdio.h>
int main() {
    int n, x, i;
    int leftSum, rightSum;
    int pivot = -1;

    // Read the value of n
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check every possible pivot integer
    for (x = 1; x <= n; x++) {

        leftSum = 0;
        rightSum = 0;

        // Calculate sum from 1 to x
        for (i = 1; i <= x; i++) {
            leftSum = leftSum + i;
        }

        // Calculate sum from x to n
        for (i = x; i <= n; i++) {
            rightSum = rightSum + i;
        }

        // Check if both sums are equal
        if (leftSum == rightSum) {
            pivot = x;
            break;
        }
    }

    // Print the pivot integer
    printf("%d", pivot);

    return 0;
}
