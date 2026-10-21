// Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int n, i, num;
    int freq[1001] = {0};

    // Read the size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find repeated element using single loop
    for (i = 0; i < n; i++) {

        num = arr[i];

        if (freq[num] == 1) {
            printf("%d", num);
            return 0;
        }

        freq[num] = 1;
    }

    return 0;
}