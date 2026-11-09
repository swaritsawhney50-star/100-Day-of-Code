// Q138: Print all enum names and integer values using a loop.

#include <stdio.h>

int main() {

    // Declare enumeration
    enum TrafficLight {
        RED,
        YELLOW,
        GREEN
    };

    // Store enum names in an array
    char *names[] = {"RED", "YELLOW", "GREEN"};

    int i;

    // Print enum names and values using loop
    for (i = RED; i <= GREEN; i++) {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}