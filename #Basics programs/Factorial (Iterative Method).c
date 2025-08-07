#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;// can store very large values upto 18-19 digits

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);// here %llu is used for unsigned long long type
    }

    return 0;
}
