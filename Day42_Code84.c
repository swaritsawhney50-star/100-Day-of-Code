// Q84: Convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>
int main() {
    char str[100];
    int i = 0;

    // Read the string
    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    // Convert lowercase characters to uppercase
    while (str[i] != '\0') {

        // Check if the character is lowercase
        if (str[i] >= 'a' && str[i] <= 'z') {

            // Convert lowercase to uppercase
            str[i] = str[i] - 32;
        }

        // Move to the next character
        i++;
    }

    // Print the uppercase string
    printf("Uppercase string: %s", str);

    return 0;
}