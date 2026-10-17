// Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    int freq[26] = {0};
    int i;

    // Read two strings
    printf("Enter first string: ");
    scanf("%99s", s);

    printf("Enter second string: ");
    scanf("%99s", t);

    // Check if lengths are equal
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram");
        return 0;
    }

    // Count frequency of first string
    for (i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
    }

    // Decrease frequency using second string
    for (i = 0; t[i] != '\0'; i++) {
        freq[t[i] - 'a']--;
    }

    // Check frequencies
    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    // If all frequencies are zero
    printf("Anagram");

    return 0;
}