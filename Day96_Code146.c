// Q146: Create Employee structure with nested Date structure for joining date and print details.

#include <stdio.h>

// Define Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Define Employee structure
struct Employee {
    char name[50];
    int id;
    struct Date joiningDate;
};

int main() {
    struct Employee e;

    // Read employee details
    printf("Enter Employee Name: ");
    scanf("%49s", e.name);

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d",
          &e.joiningDate.day,
          &e.joiningDate.month,
          &e.joiningDate.year);

    // Print employee details
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d",
           e.name,
           e.id,
           e.joiningDate.day,
           e.joiningDate.month,
           e.joiningDate.year);

    return 0;
}