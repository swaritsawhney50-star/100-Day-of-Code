// Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

#include <stdio.h>
int main() {
    int n, i, j;
    int count;
    int majority = -1;

    // Read the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];

    // Read array elements
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Check frequency of each element
    for (i = 0; i < n; i++) {

        count = 0;

        // Count occurrence of nums[i]x
        for (j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }

        // Check if it occurs more than n/2 times
        if (count > n / 2) {
            majority = nums[i];
            break;
        }
    }

    // Print the majority element
    printf("%d", majority);

    return 0;
}
