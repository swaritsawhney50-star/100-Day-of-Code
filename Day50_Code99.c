// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
int main() {
    int day, month, year;

    // Read the date in dd/mm/yyyy format
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    // Check if the month is April
    if (month == 4) {
        printf("%02d-Apr-%d", day, year);
    }
    else {
        printf("Invalid month");
    }

    return 0;
}