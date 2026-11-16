// Q145: Return a structure containing top student's details from a function.

#include <stdio.h>

// Define structure
struct Student {
    char name[50];
    int roll_no;
    int marks;
};

// Function to find top student
struct Student findTopper(struct Student s[], int n) {
    int i, maxIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    return s[maxIndex];
}

int main() {
    struct Student s[100], topper;
    int n, i;

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

    // Call function and store returned structure
    topper = findTopper(s, n);

    // Print top student
    printf("Top Student: %s | Roll: %d | Marks: %d",
           topper.name, topper.roll_no, topper.marks);

    return 0;
}