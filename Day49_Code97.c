// Q97: Print the initials of a name.

#include <stdio.h>

int main() {
    char name[100];
    int i = 0;

    // Read the complete name
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Print the first character as an initial
    if (name[0] != '\0' && name[0] != '\n') {
        printf("%c.", name[0]);
    }

    // Find and print the first letter after each space
    while (name[i] != '\0') {

        if (name[i] == ' ' &&
            name[i + 1] != ' ' &&
            name[i + 1] != '\n' &&
            name[i + 1] != '\0') {

            printf("%c.", name[i + 1]);
        }

        i++;
    }

    return 0;
}