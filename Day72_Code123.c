// Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

#include <stdio.h>

int main() {
    FILE *fp;
    int ch;
    int characters = 0;
    int words = 0;
    int lines = 0;
    int inWord = 0;
    int lastChar = '\0';

    // Open file in read mode
    fp = fopen("sample.txt", "r");

    // Check if file exists
    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF) {

        // Count characters
        characters++;

        // Count lines
        if (ch == '\n') {
            lines++;
        }

        // Count words
        if (ch == ' ' || ch == '\n') {
            inWord = 0;
        }
        else if (inWord == 0) {
            words++;
            inWord = 1;
        }

        lastChar = ch;
    }

    // Count last line without newline
    if (characters > 0 && lastChar != '\n') {
        lines++;
    }

    // Print the results
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    // Close the file
    fclose(fp);

    return 0;
}