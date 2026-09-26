// Q95: Check if one string is a rotation of another.

#include <stdio.h>
int main() {
    char str1[100], str2[100];
    char combined[200];
    int len1 = 0, len2 = 0;
    int i, j;
    int found = 0;

    // Read the first string
    printf("Enter first string: ");
    scanf("%s", str1);

    // Read the second string
    printf("Enter second string: ");
    scanf("%s", str2);

    // Find length of first string
    while (str1[len1] != '\0') {
        len1++;
    }

    // Find length of second string
    while (str2[len2] != '\0') {
        len2++;
    }

    // If lengths are different, rotation is not possible
    if (len1 != len2) {
        printf("Not rotation");
        return 0;
    }

    // Create str1 + str1
    for (i = 0; i < len1; i++) {
        combined[i] = str1[i];
        combined[i + len1] = str1[i];
    }

    combined[2 * len1] = '\0';

    // Search str2 inside combined string

    for (i = 0; i < len1; i++) {

        for (j = 0; j < len2; j++) {
            if (combined[i + j] != str2[j]) {
                break;
            }
        }

        // If all characters matched
        if (j == len2) {
            found = 1;
            break;
        }
    }

    // Print the result
    if (found == 1) {
        printf("Rotation");
    } else {
        printf("Not rotation");
    }

    return 0;
}
