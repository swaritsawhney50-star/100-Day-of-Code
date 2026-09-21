// Q85: Reverse a string.

#include <stdio.h>
int main() {
    char str[100];
    int i, length = 0;

    // Read the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Find the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Print the string in reverse order
    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}