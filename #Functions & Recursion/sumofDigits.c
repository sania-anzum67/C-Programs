#include <stdio.h>

// Function to sum digits of a number
int sumDigits(int n) {
    if (n == 0) return 0;  
    return (n % 10) + sumDigits(n / 10); // Add last digit + recursion
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits: %d\n", sumDigits(num));
    return 0;
}
