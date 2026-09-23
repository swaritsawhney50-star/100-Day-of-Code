// Q89: Count frequency of a given character in a string.

#include <stdio.h>
int main() {
    char str[100];
    char ch;
    int i = 0;
    int count = 0;

    // Read the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Read the character whose frequency is to be found
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check each character of the string
    while (str[i] != '\0') {

        // Check if current character matches given character
        if (str[i] == ch) {
            count++;
        }

        // Move to the next character
        i++;
    }

    // Print the frequency
    printf("Frequency of %c = %d", ch, count);

    return 0;
}