//  Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>
#include <string.h>

int main() {
    enum Operation {
        ADD,
        SUBTRACT,
        MULTIPLY
    };

    enum Operation choice;
    char input[20];
    int a, b;

    // Read operation and two numbers
    printf("Enter operation and two numbers: ");
    scanf("%19s %d %d", input, &a, &b);

    // Convert input into enum value
    if (strcmp(input, "ADD") == 0) {
        choice = ADD;
    }
    else if (strcmp(input, "SUBTRACT") == 0) {
        choice = SUBTRACT;
    }
    else if (strcmp(input, "MULTIPLY") == 0) {
        choice = MULTIPLY;
    }
    else {
        printf("Invalid operation");
        return 0;
    }

    // Perform operation using switch
    switch (choice) {
        case ADD:
            printf("%d", a + b);
            break;

        case SUBTRACT:
            printf("%d", a - b);
            break;

        case MULTIPLY:
            printf("%d", a * b);
            break;
    }

    return 0;
}