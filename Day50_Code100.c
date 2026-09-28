// Q100: Print all sub-strings of a string.

#include <stdio.h>
int main() {
    char str[100];
    int i, j, k;
    int length = 0;
    int first = 1;

    // Read the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Find the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Generate all substrings
    for (i = 0; i < length; i++) {

        // Select the ending position
        for (j = i; j < length; j++) {

            // Print comma before every substring except the first
            if (!first) {
                printf(",");
            }

            // Print characters from i to j
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }

            first = 0;
        }
    }

    return 0;
}