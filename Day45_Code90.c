// Q90: Toggle case of each character in a string.

#include <stdio.h>
int main() {
    char str[100];
    int i = 0;

    // Read the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Check each character of the string
    while (str[i] != '\0') {

        // Convert uppercase letter to lowercase
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }

        // Convert lowercase letter to uppercase
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }

        // Move to the next character
        i++;
    }

    // Print the toggled string
    printf("Toggled string: %s", str);

    return 0;
}