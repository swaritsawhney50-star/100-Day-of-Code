// Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    int ch;

    // Open input file in read mode
    fp1 = fopen("input.txt", "r");

    // Check if input file exists
    if (fp1 == NULL) {
        printf("Input file not found!");
        return 1;
    }

    // Open output file in write mode
    fp2 = fopen("output.txt", "w");

    // Check if output file opened
    if (fp2 == NULL) {
        printf("Error opening output file!");
        fclose(fp1);
        return 1;
    }

    // Read each character from input file
    while ((ch = fgetc(fp1)) != EOF) {

        // Convert lowercase to uppercase
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }

        // Write character to output file
        fputc(ch, fp2);
    }

    // Close both files
    fclose(fp1);
    fclose(fp2);

    // Display success message
    printf("File converted successfully!");

    return 0;
}