#include <stdio.h>

// Function to get nth Fibonacci term
int fibonacci(int n) {
    if (n == 0) return 0;  // Base case 1
    if (n == 1) return 1;  // Base case 2
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++)
        printf("%d ", fibonacci(i));
    return 0;
}
