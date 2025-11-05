// Simple C program
/*
Name: Joy Stanley
Reg No: CT100/G/26267/25
*/

#include <stdio.h>  // pre-processor directive

int main() {
    FILE *inFile, *outFile;
    int i, num, sum = 0;
    float avg;

    // Open file to write numbers
    inFile = fopen("input.txt", "w");
    printf("Enter 10 integers:\n");

    for(i = 0; i < 10; i++) {
        scanf("%d", &num);
        fprintf(inFile, "%d\n", num);
    }
    fclose(inFile);

    // Read numbers, find sum and average
    inFile = fopen("input.txt", "r");
    for(i = 0; i < 10; i++) {
        fscanf(inFile, "%d", &num);
        sum += num;
    }
    fclose(inFile);

    avg = sum / 10.0;

    // Write sum and average to output.txt
    outFile = fopen("output.txt", "w");
    fprintf(outFile, "Sum = %d\nAverage = %.2f\n", sum, avg);
    fclose(outFile);

    printf("\nSum and average saved to output.txt\n");
    return 0;
}