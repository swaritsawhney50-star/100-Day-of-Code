// Q47: Write a program to print the following pattern:
//*
//**
//***
//****
//*****

#include <stdio.h>
int main() {

    int i, j;  // Declare loop variables

    // Outer loop controls the number of rows
    for (i = 1; i <= 5; i++) {

        // Inner loop prints stars in each row
        for (j = 1; j <= i; j++) {

            printf("*");  // Print a star
        }

        printf("\n");  // Move to the next line
    }

    return 0;  // End the program successfully
}