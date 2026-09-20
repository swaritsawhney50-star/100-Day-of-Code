// Q83: Count vowels and consonants in a string.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int vowels = 0, consonants = 0;

    // Read the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Check each character of the string
    while (str[i] != '\0') {

        // Check if the character is an alphabet
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z')) {

            // Check if the character is a vowel
            if (str[i] == 'a' || str[i] == 'e' ||
                str[i] == 'i' || str[i] == 'o' ||
                str[i] == 'u' || str[i] == 'A' ||
                str[i] == 'E' || str[i] == 'I' ||
                str[i] == 'O' || str[i] == 'U') {

                vowels++;
            }
            else {
                // If alphabet but not vowel, it is consonant
                consonants++;
            }
        }

        // Move to the next character
        i++;
    }

    // Print the result
    printf("Vowels=%d, Consonants=%d", vowels, consonants);

    return 0;
}