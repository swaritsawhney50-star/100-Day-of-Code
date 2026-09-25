// Q93: Check if two strings are anagrams of each other.

#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int freq[26] = {0};
    int i = 0;

    // Read the first string
    printf("Enter first string: ");
    scanf("%s", str1);

    // Read the second string
    printf("Enter second string: ");
    scanf("%s", str2);

    // Count characters of first string
    i = 0;
    while (str1[i] != '\0') {
        freq[str1[i] - 'a']++;
        i++;
    }

    // Subtract characters of second string
    i = 0;
    while (str2[i] != '\0') {
        freq[str2[i] - 'a']--;
        i++;
    }

    // Check the frequency array
    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    // If all frequencies are zero
    printf("Anagrams");

    return 0;
}