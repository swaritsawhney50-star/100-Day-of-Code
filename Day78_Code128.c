// Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Error opening input.txt!\n");
        return 1;
    }

    char ch;
    int vowels = 0;
    int consonants = 0;

    while ((ch = fgetc(file)) != EOF) {
        ch = tolower(ch); // Convert to lowercase for easier checking
        
        // Check if the character is an alphabet letter
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        // Digits and special characters are automatically ignored
    }

    fclose(file);

    printf("Total Vowels: %d\n", vowels);
    printf("Total Consonants: %d\n", consonants);

    return 0;
}