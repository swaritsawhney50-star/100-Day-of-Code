// Q120: Write a program to take a string input. Change it to sentence case.

#include <stdio.h>

int main() {
    char str[200];
    int i;

    // Read the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert the first letter of each word to uppercase
    for (i = 0; str[i] != '\0'; i++) {

        // Convert first character or character after space
        if (i == 0 || str[i - 1] == ' ') {

            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
            }
        }
    }

    // Print the modified string
    printf("%s", str);

    return 0;
}