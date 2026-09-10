// Q64: Find the digit that occurs the most times in an integer number.


#include <stdio.h>
int main() {
    long long num;
    int count[10] = {0};
    int digit, maxDigit = 0;
    int i;

    // Read the integer number
    printf("Enter an integer number: ");
    scanf("%lld", &num);

    // Count the occurrence of each digit
    while (num > 0) {
        digit = num % 10;       // Get the last digit
        count[digit]++;         // Increase its count
        num = num / 10;         // Remove the last digit
    }

    // Find the digit that occurs the most times
    for (i = 1; i < 10; i++) {
        if (count[i] > count[maxDigit]) {
            maxDigit = i;
        }
    }

    // Print the most frequent digit
    printf("Most frequent digit = %d\n", maxDigit);

    return 0;
}