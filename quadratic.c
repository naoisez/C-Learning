#include <stdio.h>

/* Write a C program to calculate the root of a Quadratic Equation.
Test Data : 1 5 7
Expected Output :
Root are imaginary;
No solution. */



int main() {
    int a, b, c;
    float discriminant, r1, r2;

    printf("Input a, b, and c: ");
    scanf("%d%d%d", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check the value of the discriminant
    if (discriminant > 0) {
        // Two real roots
        r1 = (-b + sqrt(discriminant)) / (2 * a);
        r2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: %.2f and %.2f\n", r1, r2);
    } else if (discriminant == 0) {
        // One real root
        r1 = -b / (2 * a);
        printf("Roots are real and same: %.2f\n", r1);
    } else {
        // Imaginary roots
        printf("Roots are imaginary; No solution.\n");
    }

    return 0;
}
