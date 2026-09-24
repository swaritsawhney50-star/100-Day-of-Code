// Q92: Find the first repeating lowercase alphabet in a string.

#include <stdio.h>
int main() {
    char str[100];
    int freq[26] = {0};
    int i = 0;

    // Read the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Count frequency of each lowercase alphabet
    while (str[i] != '\0') {

        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        }

        i++;
    }

    // Find the first repeating lowercase alphabet
    i = 0;

    while (str[i] != '\0') {

        if (str[i] >= 'a' && str[i] <= 'z' &&
            freq[str[i] - 'a'] > 1) {

            printf("First repeating alphabet = %c", str[i]);
            return 0;
        }

        i++;
    }

    // If no repeating alphabet is found
    printf("No repeating alphabet");

    return 0;
}