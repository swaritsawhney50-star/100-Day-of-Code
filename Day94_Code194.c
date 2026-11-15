// Q144: Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>

// Define structure
struct Student {
    char name[50];
    int roll_no;
    int marks;
};

// Function to display student details
void display(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d",
           s.name, s.roll_no, s.marks);
}

int main() {
    struct Student s;

    // Read student details
    printf("Enter Name: ");
    scanf("%49s", s.name);

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll_no);

    printf("Enter Marks: ");
    scanf("%d", &s.marks);

    // Call function
    display(s);

    return 0;
}