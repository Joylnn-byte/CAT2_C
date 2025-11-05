// Simple C program
/*
Name: Joy Stanley
Reg No: CT100/G/26267/25
*/

#include <stdio.h>  // pre-processor directive

int main() {
    float hours, rate, gross, tax, net, overtime;

    printf("Enter hours worked: ");
    scanf("%f", &hours);

    printf("Enter hourly rate: ");
    scanf("%f", &rate);

    // Calculate overtime
    if (hours > 40) {
        overtime = hours - 40;
        gross = (40 * rate) + (overtime * rate * 1.5);
    } else {
        gross = hours * rate;
    }

    // Tax calculation
    tax = (gross <= 600) ? gross * 0.15 : (600 * 0.15) + ((gross - 600) * 0.20);

    // Net pay
    net = gross - tax;

    // Output results
    printf("\nGross Pay = %.2f\n", gross);
    printf("Tax = %.2f\n", tax);
    printf("Net Pay = %.2f\n", net);

    return 0;
}
    