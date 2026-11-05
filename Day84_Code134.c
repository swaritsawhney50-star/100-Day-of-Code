//  Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include <stdio.h>
#include <string.h>

int main() {

    // Declare enumeration
    enum Status {
        SUCCESS,
        FAILURE,
        TIMEOUT
    };

    enum Status status;
    char input[20];

    // Read status from user
    printf("Enter status: ");
    scanf("%19s", input);

    // Compare input and assign enum value
    if (strcmp(input, "SUCCESS") == 0) {
        status = SUCCESS;
    }
    else if (strcmp(input, "FAILURE") == 0) {
        status = FAILURE;
    }
    else if (strcmp(input, "TIMEOUT") == 0) {
        status = TIMEOUT;
    }
    else {
        printf("Invalid status");
        return 0;
    }

    // Print message using switch
    switch (status) {
        case SUCCESS:
            printf("Operation successful");
            break;

        case FAILURE:
            printf("Operation failed");
            break;

        case TIMEOUT:
            printf("Operation timed out");
            break;
    }

    return 0;
}