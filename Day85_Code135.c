// Q135: Assign explicit values starting from 10 and print them.

#include <stdio.h>

int main() {

    // Declare enum with explicit starting value
    enum Numbers {
        A = 10,
        B,
        C
    };

    // Print enum values
    printf("A=%d\n", A);
    printf("B=%d\n", B);
    printf("C=%d\n", C);

    return 0;
}