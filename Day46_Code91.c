// Q91: Remove all vowels from a string.

#include <stdio.h>
int main() {
    char str[100];
    int i = 0, j = 0;

    // Read the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Check each character of the string
    while (str[i] != '\0') {

        // Check if the character is not a vowel
        if (str[i] != 'a' && str[i] != 'e' &&
            str[i] != 'i' && str[i] != 'o' &&
            str[i] != 'u' && str[i] != 'A' &&
            str[i] != 'E' && str[i] != 'I' &&
            str[i] != 'O' && str[i] != 'U') {

            // Store non-vowel character
            str[j] = str[i];
            j++;
        }

        // Move to the next character
        i++;
    }

    // Add null character at the end
    str[j] = '\0';

    // Print the string after removing vowels
    printf("String after removing vowels: %s", str);

    return 0;
}