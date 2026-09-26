// Q96: Reverse each word in a sentence without changing the word order.


#include <stdio.h>
int main() {
    char str[200];
    int i = 0, start, end, j;

    // Read the complete sentence
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Process each word
    while (str[i] != '\0') {

        // Skip spaces
        if (str[i] == ' ') {
            printf(" ");
            i++;
            continue;
        }

        // Store the starting position of the word
        start = i;

        // Find the ending position of the word
        while (str[i] != ' ' &&
               str[i] != '\n' &&
               str[i] != '\0') {
            i++;
        }

        end = i - 1;

        // Print the word in reverse order
        for (j = end; j >= start; j--) {
            printf("%c", str[j]);
        }

        // Stop if end of string is reached
        if (str[i] == '\0' || str[i] == '\n') {
            break;
        }
    }

    return 0;
}