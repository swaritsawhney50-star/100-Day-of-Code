// Q88: Replace spaces with hyphens in a string.

#include <stdio.h>
int main() {
    char str[100];
    int i = 0;

    // Read the string including spaces
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Check each character of the string
    while (str[i] != '\0') {

        // Replace space with hyphen
        if (str[i] == ' ') {
            str[i] = '-';
        }

        // Move to the next character
        i++;
    }

    // Print the modified string
    printf("Modified string: %s", str);

    return 0;
}