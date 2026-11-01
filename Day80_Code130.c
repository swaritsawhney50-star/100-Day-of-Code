// Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, marks;
    int n, i;

    // Read number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Open file in write mode
    fp = fopen("students.txt", "w");

    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    // Read and store student records
    for (i = 0; i < n; i++) {

        printf("Enter details of student %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%49s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%d", &marks);

        // Write data into file
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    // Close file after writing
    fclose(fp);

    // Open file in read mode
    fp = fopen("students.txt", "r");

    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    // Read and display student records
    while (fscanf(fp, "%49s %d %d",
                  name, &roll, &marks) == 3) {

        printf("Name: %s | Roll: %d | Marks: %d\n",
               name, roll, marks);
    }

    // Close file
    fclose(fp);

    return 0;
}