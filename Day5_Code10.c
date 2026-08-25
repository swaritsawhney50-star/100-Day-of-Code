// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
int main() 
{
    int totalSeconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;              // 3600 seconds in an hour
    minutes = (totalSeconds % 3600) / 60;      // remaining seconds converted to minutes
    seconds = totalSeconds % 60;               // leftover seconds

    printf("%d seconds = %d:%d:%d (hh:mm:ss)\n", totalSeconds, hours, minutes, seconds);

    return 0;
}