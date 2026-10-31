// Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0, count = 0;
    float average;

    // Open file in read mode
    fp = fopen("numbers.txt", "r");

    // Check if file exists
    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }

    // Read integers from file
    while (fscanf(fp, "%d", &num) == 1) {
        sum = sum + num;
        count++;
    }

    // Calculate average
    if (count > 0) {
        average = (float)sum / count;
    }
    else {
        printf("File contains no integers!");
        fclose(fp);
        return 0;
    }

    // Print sum and average
    printf("Sum = %d\n", sum);
    printf("Average = %.2f", average);

    // Close the file
    fclose(fp);

    return 0;
}