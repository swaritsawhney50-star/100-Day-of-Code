// Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>
int main() {
    char name[100];
    int i, lastSpace = -1;

    // Read the complete name
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Find the position of the last space
    for (i = 0; name[i] != '\0' && name[i] != '\n'; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }

    // Print the first initial
    printf("%c.", name[0]);

    // Print initials of middle names
    for (i = 0; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ') {
            printf("%c.", name[i + 1]);
        }
    }

    // Print a space before the surname
    printf(" ");

    // Print the surname in full
    for (i = lastSpace + 1;
         name[i] != '\0' && name[i] != '\n';
         i++) {
        printf("%c", name[i]);
    }

    return 0;
}
