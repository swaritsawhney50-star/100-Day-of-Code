// Q86: Check if a string is a palindrome.

#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;
    int palindrome = 1;

    // Read the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Find the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Check whether the string is palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    // Print the result
    if (palindrome == 1) {
        printf("Palindrome");
    } else {
        printf("Not palindrome");
    }

    return 0;
}