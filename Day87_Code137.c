// Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>
#include <string.h>

int main() {

    // Declare enumeration
    enum Role {
        ADMIN,
        USER,
        GUEST
    };

    enum Role role;
    char input[20];

    // Read role from user
    printf("Enter user role: ");
    scanf("%19s", input);

    // Compare input and assign enum value
    if (strcmp(input, "ADMIN") == 0) {
        role = ADMIN;
    }
    else if (strcmp(input, "USER") == 0) {
        role = USER;
    }
    else if (strcmp(input, "GUEST") == 0) {
        role = GUEST;
    }
    else {
        printf("Invalid role");
        return 0;
    }

    // Display message using switch
    switch (role) {
        case ADMIN:
            printf("Welcome Admin!");
            break;

        case USER:
            printf("Welcome User!");
            break;

        case GUEST:
            printf("Welcome Guest!");
            break;
    }

    return 0;
}