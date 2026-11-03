// Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include <stdio.h>
#include <string.h>

int main() {
    enum TrafficLight {
        RED,
        YELLOW,
        GREEN
    };

    enum TrafficLight light;
    char input[20];

    // Read traffic light
    printf("Enter traffic light: ");
    scanf("%19s", input);

    // Check input and assign enum value
    if (strcmp(input, "RED") == 0) {
        light = RED;
    }
    else if (strcmp(input, "YELLOW") == 0) {
        light = YELLOW;
    }
    else if (strcmp(input, "GREEN") == 0) {
        light = GREEN;
    }
    else {
        printf("Invalid traffic light");
        return 0;
    }

    // Print result using switch
    switch (light) {
        case RED:
            printf("Stop");
            break;

        case YELLOW:
            printf("Wait");
            break;

        case GREEN:
            printf("Go");
            break;
    }

    return 0;
}