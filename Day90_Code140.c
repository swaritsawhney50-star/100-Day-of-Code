// Q140: Define a struct with enum Gender and print person's gender.

#include <stdio.h>
#include <string.h>

int main() {

    // Declare enum
    enum Gender {
        MALE,
        FEMALE,
        OTHER
    };

    // Declare structure
    struct Person {
        enum Gender gender;
    };

    struct Person p;
    char input[20];

    // Read gender
    printf("Enter Gender: ");
    scanf("%19s", input);

    // Assign enum value
    if (strcmp(input, "MALE") == 0) {
        p.gender = MALE;
    }
    else if (strcmp(input, "FEMALE") == 0) {
        p.gender = FEMALE;
    }
    else if (strcmp(input, "OTHER") == 0) {
        p.gender = OTHER;
    }
    else {
        printf("Invalid Gender");
        return 0;
    }

    // Print gender using switch
    switch (p.gender) {
        case MALE:
            printf("Male");
            break;

        case FEMALE:
            printf("Female");
            break;

        case OTHER:
            printf("Other");
            break;
    }

    return 0;
}