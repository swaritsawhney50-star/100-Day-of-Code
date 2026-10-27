// Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];

    // Open file in append mode
    fp = fopen("data.txt", "a");

    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    // Read text from user
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Move to a new line and append text
    fprintf(fp, "\n%s", text);

    // Close the file
    fclose(fp);

    // Display success message
    printf("File updated successfully with appended text.");

    return 0;
}