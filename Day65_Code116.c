// Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

#include <stdio.h>

int main() {
    int n, i, j, target;

    // Read the size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid size");
        return 0;
    }

    int nums[n];

    // Read array elements
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Read target
    printf("Enter target: ");
    scanf("%d", &target);

    // Find two indices whose sum equals target
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {

            if (nums[i] + nums[j] == target) {
                printf("%d %d", i, j);
                return 0;
            }
        }
    }

    // If no solution exists
    printf("-1 -1");

    return 0;
}