// Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

#include <stdio.h>

int main()
{
    int nums[100];
    int n, target;
    int first = -1, last = -1;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input sorted array
    printf("Enter sorted array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    // Input target
    printf("Enter target: ");
    scanf("%d", &target);

    // Find first occurrence
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            first = i;
            break;
        }
    }

    // Find last occurrence
    for (int i = n - 1; i >= 0; i--)
    {
        if (nums[i] == target)
        {
            last = i;
            break;
        }
    }

    // Print result
    printf("%d,%d\n", first, last);

    return 0;
}