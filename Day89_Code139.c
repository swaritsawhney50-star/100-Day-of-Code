// Q139: Show that enums store integers by printing assigned values.

#include <stdio.h>

int main() {

    // Declare enumeration
    enum Status {
        SUCCESS,
        FAILURE,
        TIMEOUT
    };

    // Print enum integer values
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d",
           SUCCESS, FAILURE, TIMEOUT);

    return 0;
}