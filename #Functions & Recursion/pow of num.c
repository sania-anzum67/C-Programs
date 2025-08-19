#include <stdio.h>

// Function to calculate power (x^y)
int power(int base, int exp) {
    if (exp == 0) return 1; // Any number ^ 0 = 1
    return base * power(base, exp - 1);
}

int main() {
    int base, exp;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);
    printf("%d^%d = %d\n", base, exp, power(base, exp));
    return 0;
}
