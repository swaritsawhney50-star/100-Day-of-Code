// Q94: Find the longest word in a sentence.

#include <stdio.h>
int main() {
    char str[200];
    char longest[100];
    int i = 0, j;
    int start = 0;
    int length = 0;
    int maxLength = 0;
    int maxStart = 0;

    // Read the complete sentence
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Check each character of the sentence
    while (1) {

        // Check for space, newline, or end of string
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {

            // Calculate length of current word
            length = i - start;

            // Check if current word is the longest
            if (length > maxLength) {
                maxLength = length;
                maxStart = start;
            }

            // Start of the next word
            start = i + 1;
        }

        // Stop at the end of the string
        if (str[i] == '\0') {
            break;
        }

        i++;
    }

    // Copy the longest word
    for (j = 0; j < maxLength; j++) {
        longest[j] = str[maxStart + j];
    }

    // Add null character at the end
    longest[j] = '\0';

    // Print the longest word
    printf("Longest word = %s", longest);

    return 0;
}