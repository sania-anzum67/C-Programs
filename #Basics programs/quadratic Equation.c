#include <stdio.h>
#include <math.h>

// Function to find roots of quadratic equation
void findRoots(float a, float b, float c) {
    float discriminant, root1, root2, realPart, imagPart;

    discriminant = b * b - 4 * a * c;

    // Case 1: Real and distinct roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root1 = %.2f\n", root1);
        printf("Root2 = %.2f\n", root2);
    }
    // Case 2: Real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root1 = Root2 = %.2f\n", root1);
    }
    // Case 3: Complex roots
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and imaginary:\n");
        printf("Root1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root2 = %.2f - %.2fi\n", realPart, imagPart);
    }
}

int main() {
    float a, b, c;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Validate 'a' should not be 0
    if (a == 0) {
        printf("Invalid input! Coefficient 'a' cannot be zero.\n");
    } else {
        findRoots(a, b, c);
    }

    return 0;
}
