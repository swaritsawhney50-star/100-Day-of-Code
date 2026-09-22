// Q87: Count spaces, digits, and special characters in a string.

#include <stdio.h>
int main() {
    char str[100];
    int i = 0;
    int spaces = 0;
    int digits = 0;
    int special = 0;

    // Read the string including spaces
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Check each character of the string
    while (str[i] != '\0' && str[i] != '\n') {

        // Check for space
        if (str[i] == ' ') {
            spaces++;
        }

        // Check for digit
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }

        // Check for special character
        else if (!((str[i] >= 'A' && str[i] <= 'Z') ||
                   (str[i] >= 'a' && str[i] <= 'z'))) {
            special++;
        }

        // Move to the next character
        i++;
    }

    // Print the result
    printf("Spaces=%d, Digits=%d, Special=%d",
           spaces, digits, special);

    return 0;
}
