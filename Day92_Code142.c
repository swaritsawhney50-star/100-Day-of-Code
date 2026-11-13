// Q142: Store details of 5 students in an array of structures and print all.

#include <stdio.h>

// Define structure
struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s[5];
    int i;

    // Read details of 5 students
    for (i = 0; i < 5; i++) {
        printf("Enter details of student %d:\n", i + 1);

        printf("Enter Name: ");
        scanf("%49s", s[i].name);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter Marks: ");
        scanf("%d", &s[i].marks);
    }

    // Print student details
    printf("\nStudent Details:\n");
    printf("Name\tRoll\tMarks\n");

    for (i = 0; i < 5; i++) {
        printf("%s\t%d\t%d\n",
               s[i].name,
               s[i].roll_no,
               s[i].marks);
    }

    return 0;
}