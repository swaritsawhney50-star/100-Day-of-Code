// Q143: Find and print the student with the highest marks.

#include <stdio.h>

// Define structure
struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s[100];
    int n, i, maxIndex = 0;

    // Read number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid number of students");
        return 1;
    }

    // Read student details
    for (i = 0; i < n; i++) {
        printf("Enter details of student %d:\n", i + 1);

        printf("Enter Name: ");
        scanf("%49s", s[i].name);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter Marks: ");
        scanf("%d", &s[i].marks);
    }

    // Find student with highest marks
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    // Print topper details
    printf("Topper: %s (Marks: %d)",
           s[maxIndex].name,
           s[maxIndex].marks);

    return 0;
}