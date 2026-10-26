// Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>

int main() {
    FILE *source, *destination;
    char sourceFile[100], destFile[100];
    int ch;

    // Read source filename
    printf("Enter source filename: ");
    scanf("%99s", sourceFile);

    // Read destination filename
    printf("Enter destination filename: ");
    scanf("%99s", destFile);

    // Open source file in read mode
    source = fopen(sourceFile, "r");

    // Check if source file exists
    if (source == NULL) {
        printf("Source file not found!");
        return 1;
    }

    // Open destination file in write mode
    destination = fopen(destFile, "w");

    // Check if destination file opened
    if (destination == NULL) {
        printf("Error opening destination file!");
        fclose(source);
        return 1;
    }

    // Copy contents character by character
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    // Close both files
    fclose(source);
    fclose(destination);

    // Print success message
    printf("File copied successfully to %s", destFile);

    return 0;
}