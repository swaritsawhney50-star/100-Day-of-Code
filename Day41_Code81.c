// Q81: Count characters in a string without using built-in length functions.

#include <stdio.h>
int main() {
    char str[100];
    int count = 0;

    // Read the string including spaces
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count characters until null character is found
    while (str[count] != '\0') {

        // Do not count the newline added by fgets
        if (str[count] == '\n') {
            break;
        }

        count++;
    }

    // Print the total number of characters
    printf("Number of characters = %d", count);

    return 0;
}