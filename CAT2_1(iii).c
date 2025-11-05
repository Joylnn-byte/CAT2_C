// Simple C program
/*
Name: Joy Stanley
Reg No: CT100/G/26267/25
*/

#include <stdio.h>  // pre-processor directive

int main() {
    int scores[2][2][2] = {
        { {65, 92}, {84, 72} },
        { {35, 70}, {59, 67} }
    };

    printf("Scores of students:\n");

    for (int i = 0; i < 2; i++) {           // Loop through groups
        printf("Group %d:\n", i + 1);
        for (int j = 0; j < 2; j++) {       // Loop through rows
            for (int k = 0; k < 2; k++) {   // Loop through columns
                printf("%d ", scores[i][j][k]);
            }
            printf("\n"); // Move to next row
        }
        printf("\n");
    }

    return 0;
}