// Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int last[256];
    int i, start = 0, maxLength = 0;

    printf("Enter string: ");
    scanf("%s", s);

    for (i = 0; i < 256; i++)
    {
        last[i] = -1;
    }

    for (i = 0; s[i] != '\0'; i++)
    {
        if (last[(unsigned char)s[i]] >= start)
        {
            start = last[(unsigned char)s[i]] + 1;
        }

        last[(unsigned char)s[i]] = i;

        if (i - start + 1 > maxLength)
        {
            maxLength = i - start + 1;
        }
    }

    printf("%d", maxLength);

    return 0;
}