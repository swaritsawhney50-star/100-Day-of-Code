// Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    // Open file in read mode
    fp = fopen("info.txt", "r");

    // Check if file exists
    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }

    // Read and print file contents
    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }

    // Close the file
    fclose(fp);

    return 0;
}